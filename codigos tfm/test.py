import numpy as np
import matplotlib.pyplot as plt
import siggen as sg

time = np.arange(10000) * 0.01
clear_signal = sg.generate_one_period_sine(time)
s_hdr = sg.add_noise(clear_signal, 0.001)
s_hsnr = sg.add_noise(clear_signal,0.0001)
s_hsnr = sg.distort(s_hsnr, 1, 2)
error_hdr = s_hdr - clear_signal
error_hsnr = s_hsnr - clear_signal

plt.figure(figsize=(10, 8))
plt.subplot(3, 1, 1)
plt.plot(time, clear_signal, label='Clear Signal')
plt.title('Clear Signal')
plt.xlabel('Time')
plt.ylabel('Amplitude')

plt.subplot(3, 1, 2)
plt.plot(time, s_hdr ,label='HDR', color='r')
plt.title('HDR')
plt.xlabel('Time')
plt.ylabel('Amplitude')

plt.subplot(3, 1, 3)
plt.plot(time, s_hsnr, label='HSNR', color='g')
plt.title('HSNR')
plt.ylim(-1, 1)
plt.xlabel('Time')
plt.ylabel('Amplitude')

plt.tight_layout()
plt.show()