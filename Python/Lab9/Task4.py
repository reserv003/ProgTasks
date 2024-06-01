import numpy
x = numpy.array([6, 2, 0, 3, 0, 0, 5, 7, 0])
zeroIndices = numpy.where(x[:-1] == 0)
zeroIndices = zeroIndices[0]
maxValue = numpy.max(x[zeroIndices + 1])
print(maxValue)
