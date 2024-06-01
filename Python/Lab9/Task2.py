import numpy
x = numpy.array([2, 2, 2, 3, 3, 3, 5])
numbers = []
counts = []
uniqueValues, valueCounts = numpy.unique(x, return_counts=True)
numbers.extend(uniqueValues)
counts.extend(valueCounts)
numbers = numpy.array(numbers)
counts = numpy.array(counts)
print("Числа:", numbers)
print("Повторения:",counts)
