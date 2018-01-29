"""
This code simulates climbing up the Empire State Building stairs based on dice
roll. 

[1, 2] = decrement step by 1
[3, 4, 5] = increment step by 1
[6] = roll again and increment step by the number shown on dice
 
There are 100 dice rolls per simulation and 500 simulations make up the 
distribution. The model is to observe the odds that we will reach 60 steps high.
The distribution is shown on a histogram plot.
"""

### Plot the distribution ###
import matplotlib.pyplot as plt
import numpy as np
np.random.seed(123)
all_walks = []

# Simulate random walk 500 times
for i in range(500) :
    random_walk = [0]
    for x in range(100) :
        step = random_walk[-1]
        dice = np.random.randint(1,7)
        if dice <= 2:
            step = max(0, step - 1)
        elif dice <= 5:
            step = step + 1
        else:
            step = step + np.random.randint(1,7)
        if np.random.rand() <= 0.001 :
            step = 0
        random_walk.append(step)
    all_walks.append(random_walk)

# Create and plot np_aw_t
np_aw_t = np.transpose(np.array(all_walks))

# Select last row from np_aw_t: ends
ends = np_aw_t[-1]

# Plot histogram of ends, display plot
plt.hist(ends, bins = 10)
plt.xlabel("Final Steps")
plt.ylabel("Number of Simulations")
plt.title("Empire State Building")
plt.show()

# Calculate the odds that we will reach at least 60 steps high
greater_than_sixty = []         # Empty list to store list of >= 60 steps 
# Iterate through ends and check if endpoint is >= 60 steps and append to list
for x in ends:
    if ends[x] >= 60:
        greater_than_sixty.append(ends[x])

odds = len(greater_than_sixty)/len(ends)
print("Odds to reach at least 60 steps high: " + str(odds*100) + "%")    