from matplotlib import pyplot as plt
import numpy as np

# Generate 1000 random numbers
values = []
np.random.seed(123)
for x in range(100):
    values.append(np.random.randint(1, 51))
    
# Plot histogram with 15 bins based on values
plt.hist(values, bins = 15)     # create histogram of data
plt.xlabel('X-Axis')            # x-axis label
plt.ylabel('Y-Axis')            # y-axis label
plt.title('Histogram')          # histogram title
plt.show()                      # show plot