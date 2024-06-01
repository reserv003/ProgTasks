import numpy
array = numpy.random.randint(0, 20, size=(10, 4))
minValue = numpy.min(array)
maxValue = numpy.max(array)
meanValue = numpy.mean(array)
stdDeviation = numpy.std(array)
firstFiveRows = array[:5]
print(minValue)
print(maxValue)
print(meanValue)
print(stdDeviation)
print(firstFiveRows)
