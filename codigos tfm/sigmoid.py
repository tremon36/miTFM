import numpy as np
import matplotlib.pyplot as plt
import siggen as sg

def sigmoid(x):
    return 1000000 / (1 + np.exp(-x * 1000))

# Generate x values (Current) from -10 to 10
current = np.linspace(-7.5e-3, 7.5e-3, 100)

# Compute y values (Frequency) using the sigmoid function
frequency = sigmoid(current)

# Create the plot
plt.figure(figsize=(8, 4))
#plt.plot(current, frequency, label='F(I)')
plt.plot(s_hdr,time)

# Adding title and labels
plt.title('F(I)')
plt.xlabel('Current')
plt.ylabel('Frequency')

# Show grid and legend
plt.grid(True)
plt.legend()

# Display the graph
plt.show()
