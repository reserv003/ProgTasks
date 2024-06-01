import numpy
x = numpy.array([0, 1, 2, 0, 0, 4, 0, 6, 9])
nonzeroIndices = numpy.nonzero(x)[0]
print(nonzeroIndices)