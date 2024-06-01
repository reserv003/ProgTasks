import numpy
import matplotlib.pyplot
from scipy.special import legendre
degrees = range(1, 8)
fig, ax = matplotlib.pyplot.subplots()
for degree in degrees:
    x = numpy.linspace(-1, 1, 1000)
    y = legendre(degree)(x)
    ax.plot(x, y, label=f'n = {degree}')
ax.set_title('Полиномы Лежандра')
ax.legend()
matplotlib.pyplot.show()