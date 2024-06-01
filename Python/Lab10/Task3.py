import numpy
import matplotlib.pyplot
import matplotlib.animation
fig, ax = matplotlib.pyplot.subplots()
ax.set_aspect('equal')
ax.set_xlim(-1.5, 1.5)
ax.set_ylim(-1.5, 1.5)
line, = ax.plot([], [], lw=4)
def init():
    line.set_data([], [])
    return line,
def update(frame):
    t = numpy.linspace(0, 2*numpy.pi, 1000)
    x = numpy.sin(t)
    y = numpy.sin(frame*t)
    line.set_data(x, y)
    return line,
ani = matplotlib.animation.FuncAnimation(fig, update, frames=numpy.linspace(0, 1, 10), init_func=init, blit=True)
matplotlib.pyplot.show()