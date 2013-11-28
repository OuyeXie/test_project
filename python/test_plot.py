import numpy as np
import matplotlib.pyplot as plt
import math

N = 100
R0 = 3.5

t = np.arange(0.0, N, 0.2) 
#R = R0*math.exp(-t/N)

R = []
for i in range(t.shape[0]):
	R.append(R0*math.exp(-10*t[i]*t[i]/(N*N)))

plt.plot(t, R)
plt.grid()
plt.show()
