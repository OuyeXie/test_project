import numpy as np
import matplotlib.pyplot as plt
import math

N = 10.0
R0 = 5.0

t = np.arange(0., N, 0.2) 
#R = R0*math.exp(-t/N)

R = []
for i in range(t.shape[0]):
	R.append(R0*math.exp(-t[i]/N))

plt.plot(t, R)
plt.show()
