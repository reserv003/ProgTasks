import numpy
readMatrix = numpy.loadtxt('matrix.txt', delimiter=',')
totalSum = numpy.sum(readMatrix)
maxElement = numpy.max(readMatrix)
minElement = numpy.min(readMatrix)
print(readMatrix)
print(totalSum)
print(maxElement)
print(minElement)