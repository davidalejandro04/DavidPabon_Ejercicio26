import numpy as np
import matplotlib.pyplot as plt

p1=np.genfromtxt('tiempo.txt')
p10=np.genfromtxt('tiempo10Partes.txt')
p20=np.genfromtxt('tiempo20Partes.txt')
p50=np.genfromtxt('tiempo50Partes.txt')
p100=np.genfromtxt('tiempo100Partes.txt')

x=[1,10,20,50,100]

print(p1)
print(sum(p10))
t=[p1,sum(p10),sum(p20),sum(p50),sum(p100)]
plt.plot(x,t)
plt.title('Tiempo vs cantidad de partes')
plt.xlabel('Numero de partes')
plt.ylabel('Tiempo total')
plt.show()
