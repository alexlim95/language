# Data
year = []
for x in range(1950, 2101, 1):
    year.append(x)

pop = []
for y in range(0, 151, 1):
    pop.append(y)

# Print the last item from year and pop
print(year[-1])
print(pop[-1])

# Import matplotlib.pyplot as plt
from matplotlib import pyplot as plt

# Make a line plot: year on the x-axis, pop on the y-axis
plt.plot(year, pop)                 # creates a plot
plt.xlabel('Year')                  # x-axis label
plt.ylabel('Population')            # y-axis label
plt.title('Population vs. Year')    # line plot title
plt.grid(True)                      # adds grid

# Display the plot with plt.show()
plt.show()