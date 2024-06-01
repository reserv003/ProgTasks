import numpy
import matplotlib.pyplot
def lissajous_figure(a, b):
    t = numpy.linspace(0, 2*numpy.pi, 1000)
    x = numpy.sin(a*t)
    y = numpy.sin(b*t)
    matplotlib.pyplot.figure()
    matplotlib.pyplot.plot(x, y)
    matplotlib.pyplot.title(f"Lissajous Figure ({a}:{b})")
    matplotlib.pyplot.axis('equal')
    matplotlib.pyplot.show()
frequencies = [(3, 2), (3, 4), (5, 4), (5, 6)]
for freq in frequencies:
    lissajous_figure(freq[0], freq[1])