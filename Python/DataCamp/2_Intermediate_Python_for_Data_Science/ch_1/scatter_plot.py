from matplotlib import pyplot as plt
import numpy as np

# Generate 100 random numbers
x_vals = []
np.random.seed(123)
for x in range(100):
    x_vals.append(np.random.randint(1, 101))
    
# Generate 100 random numbers
y_vals = []             # empty list
np.random.seed(123)     # seed random number generator
for y in range(100):
    y_vals.append(np.random.rand())
    
# Scatter Plot
plt.scatter(x_vals, y_vals) # creates a scatter plot
plt.xscale('log')           # puts x-axis on log scale
plt.xlabel('X-Axis')        # x-axis label
plt.ylabel('Y-Axis')        # y-axis label
plt.title('Scatter Plot')   # scatter plot title
plt.show()                  # show scatter plot