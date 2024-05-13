from matplotlib import pyplot as plt
import numpy as np
import keras
from keras import layers
import tensorflow as tf
import siggen as sg

# Define a custom model with integrated inputs and outputs
class CustomModel(keras.Model):
    def __init__(self):
        super(CustomModel, self).__init__()
        self.dense1 = layers.Dense(32, activation='relu')
        self.dense2 = layers.Dense(16, activation='relu')
        self.output_layer = layers.Dense(2, activation='softmax')
        
    def call(self, inputs):
        x = self.dense1(inputs)
        x = self.dense2(x)
        return self.output_layer(x)

    def train_step(self, data):
        # Unpack the data. These are the inputs/outputs your model will use to compute the loss.
        x, y = data

        with tf.GradientTape() as tape:
            y_pred = self(x, training=True)  # Forward pass
            # Compute our own custom loss
            out1 = y_pred[:, 0]
            out2 = y_pred[:, 1]
            predicted_signal = out1 * x[:, 0] + out2 * x[:, 1]
            loss = tf.reduce_mean(tf.square(predicted_signal - y))  # MSE Loss

        # Compute gradients
        trainable_vars = self.trainable_variables
        gradients = tape.gradient(loss, trainable_vars)

        # Update weights
        self.optimizer.apply_gradients(zip(gradients, trainable_vars))

        # Return a dict mapping metrics names to current value
        return {"loss": loss}

# Instantiate and compile the model
model = CustomModel()
model.compile(optimizer='adam')

# Generate the dataset
time = np.arange(32000) * 0.01
clear_signal = sg.generate_growing_sine(time)
s_hdr = sg.add_noise(clear_signal, 0.0001)
s_hsnr = sg.add_noise(clear_signal,0.00001)
s_hsnr = sg.distort(s_hsnr, 1, 2)


# Prepare input and output data
inputs = np.stack((s_hdr, s_hsnr), axis=-1)  # Creates a (10000, 2) array
outputs = clear_signal  # Already in the correct shape (10000,)

# Train the model
model.fit(inputs, outputs, epochs=10, batch_size=32)

###########
###########

# model test with sine wave:

time = np.arange(32000) * 0.01
clear_signal = sg.generate_modulated_sine(time)
s_hdr = sg.add_noise(clear_signal, 0.0001)
s_hsnr = sg.add_noise(clear_signal,0.00001)
s_hsnr = sg.distort(s_hsnr, 1, 2)

# Prepare input and output data
inputs = np.stack((s_hdr, s_hsnr), axis=-1)  # Creates a (10000, 2) array
outputs = clear_signal  # Already in the correct shape (10000,)


predictions = model.predict(inputs)

# Calculate the weighted sum of s_hdr and s_hsnr using the model's predictions
weighted_sum_predictions = predictions[:, 0] * inputs[:, 0] + predictions[:, 1] * inputs[:, 1]

# Plotting the comparison of clear signal and predicted signal

# Assuming 'clear_signal', 'weighted_sum_predictions', and 'predictions' are defined
fig, axs = plt.subplots(3, 2, figsize=(15, 20))  # Creates 6 subplots in a 3x2 grid

# Column 1
axs[0, 0].plot(s_hdr, label='HDR Channel', color='blue')
axs[0, 0].set_title('HDR Channel')
axs[0, 0].set_ylabel('Signal Amplitude')
axs[0, 0].legend()

axs[1, 0].plot(s_hsnr, label='HSNR Channel', color='purple')
axs[1, 0].set_title('HSNR Channel')
axs[1, 0].set_ylabel('Signal Amplitude')
axs[1, 0].legend()

# Column 2
axs[0, 1].plot(clear_signal, label='Clear Signal', linewidth=2)
axs[0, 1].set_title('Clear Signal')
axs[0, 1].set_ylabel('Signal Amplitude')
axs[0, 1].legend()

axs[1, 1].plot(weighted_sum_predictions, label='Predicted Signal', color='orange')
axs[1, 1].set_title('Predicted Signal')
axs[1, 1].set_ylabel('Signal Amplitude')
axs[1, 1].legend()

axs[2, 0].plot(predictions[:, 0], label='Weight Out1', linestyle='-', color='r')
axs[2, 0].set_title('Weight HDR')
axs[2, 0].set_ylabel('Signal Amplitude')
axs[2, 0].legend()

axs[2, 1].plot(predictions[:, 1], label='Weight Out2', linestyle='-', color='g')
axs[2, 1].set_title('Weight HSNR')
axs[2, 1].set_ylabel('Signal Amplitude')
axs[2, 1].legend()

# Adjust spacing between subplots to prevent title overlap and to better layout the axes labels
fig.subplots_adjust(hspace=0.5, wspace=0.3)  # Adjust horizontal and vertical spacing

plt.show()