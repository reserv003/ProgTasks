import numpy
url = 'https://archive.ics.uci.edu/ml/machine-learning-databases/iris/iris.data'
iris = numpy.genfromtxt(url, delimiter=',', dtype='object')
speciesColumn = iris[:, 4]
uniqueSpecies, counts = numpy.unique(speciesColumn, return_counts=True)
for species, count in zip(uniqueSpecies, counts):
    print(f'{species.decode("utf-8")}: {count}')
