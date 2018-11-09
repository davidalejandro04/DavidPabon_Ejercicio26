import numpy as np
import matplotlib.pyplot as plt

datos=np.genfromtxt('tiempo.txt')
x=[1,10,20,100]
print(datos)
plt.plot(x,datos)
plt.show()
