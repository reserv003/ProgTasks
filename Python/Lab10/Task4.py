import numpy
import matplotlib.pyplot
from matplotlib.widgets import Slider
fig, ax = matplotlib.pyplot.subplots(3, 1, figsize=(8, 6))
t = numpy.linspace(0, 2*numpy.pi, 1000)
A1_0 = 1.0
f1_0 = 1.0
A2_0 = 1.0
f2_0 = 1.0
s1 = A1_0 * numpy.sin(2 * numpy.pi * f1_0 * t)
s2 = A2_0 * numpy.sin(2 * numpy.pi * f2_0 * t)
s_sum = s1 + s2
l1, = ax[0].plot(t, s1, lw=2, color='r')
l2, = ax[1].plot(t, s2, lw=2, color='g')
l_sum, = ax[2].plot(t, s_sum, lw=2, color='b')
ax[0].set_title('Wave 1')
ax[1].set_title('Wave 2')
ax[2].set_title('Sum of Waves')
axcolor = 'lightgoldenrodyellow'
ax_A1 = matplotlib.pyplot.axes([0.15, 0.02, 0.7, 0.02], facecolor=axcolor)
ax_f1 = matplotlib.pyplot.axes([0.15, 0.05, 0.7, 0.02], facecolor=axcolor)
ax_A2 = matplotlib.pyplot.axes([0.15, 0.08, 0.7, 0.02], facecolor=axcolor)
ax_f2 = matplotlib.pyplot.axes([0.15, 0.11, 0.7, 0.02], facecolor=axcolor)
s_A1 = Slider(ax_A1, 'Amplitude 1', 0.1, 5.0, valinit=A1_0)
s_f1 = Slider(ax_f1, 'Frequency 1', 0.5, 5.0, valinit=f1_0)
s_A2 = Slider(ax_A2, 'Amplitude 2', 0.1, 5.0, valinit=A2_0)
s_f2 = Slider(ax_f2, 'Frequency 2', 0.5, 5.0, valinit=f2_0)
def update(val):
    A1 = s_A1.val
    f1 = s_f1.val
    A2 = s_A2.val
    f2 = s_f2.val
    l1.set_ydata(A1 * numpy.sin(2 * numpy.pi * f1 * t))
    l2.set_ydata(A2 * numpy.sin(2 * numpy.pi * f2 * t))
    l_sum.set_ydata((A1 * numpy.sin(2 * numpy.pi * f1 * t)) + (A2 * numpy.sin(2 * numpy.pi * f2 * t)))
    fig.canvas.draw_idle()
s_A1.on_changed(update)
s_f1.on_changed(update)
s_A2.on_changed(update)
s_f2.on_changed(update)
matplotlib.pyplot.show()
