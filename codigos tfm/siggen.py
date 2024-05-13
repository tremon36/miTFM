from matplotlib import pyplot as plt
import numpy as np

def sigmoid(x,gain,gainmax):
    return (gainmax/(2*gain)) *(1 / (1 + np.exp(-4*x * gain)) - 0.5)

def distort(x,gain,gainmax):
    return sigmoid(x,gain,gainmax)

def generate_growing_sine(xvector):
    return (np.arange(len(xvector)) / len(xvector)) * np.sin(xvector)

def generate_sine(xvector):
    return np.sin(xvector)

def generate_one_period_sine(xvector):
    return np.sin(xvector * 2* np.pi / xvector[-1])

def generate_level(xvector, level):
    return np.full(xvector.shape,level)

def generate_modulated_sine(x):
    return generate_sine(x/10) * generate_sine(x)

def add_noise(x,amount):
    d = np.sqrt(3 * amount) # use amount as power for a uniform distribution.
    noise = np.random.uniform(-d, d, size=x.shape)
    return x + noise
