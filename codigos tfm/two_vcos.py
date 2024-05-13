import numpy as np
import matplotlib.pyplot as plt

def sigmoid(x):
    return 1000000 / (1 + np.exp(-x * 1000))

current = np.linspace(-7.5e-3, 7.5e-3, 100)

frequency =  4*(sigmoid(current) - 0.5e6)
frequency2 = 2*(sigmoid(2*current) -0.5e6)
frequency3 = sigmoid(4*current)-0.5e6

plt.figure(figsize=(8, 4))
plt.plot(current, frequency, label='F(I) (VCO1, K = 1)')
plt.plot(current, frequency2, label='F(I) (VCO2, K = 2)')
plt.plot(current, frequency3, label='F(I) (VCO3, K = 4)')

plt.title('F(I)')
plt.xlabel('Current')
plt.ylabel('Frequency')

plt.grid(False)
plt.legend()

plt.show()
