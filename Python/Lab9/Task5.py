import numpy
import time
from scipy.stats import multivariate_normal
def logpdf_custom(X, m, C):
    D = len(m)
    normСoeff = -0.5 * D * numpy.log(2 * numpy.pi)
    sign, logdet = numpy.linalg.slogdet(C)
    if sign != 1:
        return -numpy.inf
    CInverted = numpy.linalg.inv(C)
    diff = X - m
    exponent = -0.5 * numpy.sum(diff @ CInverted * diff, axis=1)
    return normСoeff + 0.5 * logdet + exponent
N, D = 1000, 3
X = numpy.random.randn(N, D)
m = numpy.random.randn(D)
C = numpy.random.randn(D, D)
C = numpy.dot(C, C.T)
startTime = time.time()
logpdf_custom(X, m, C)
customDuration = time.time() - startTime
startTime = time.time()
multivariate_normal.logpdf(X, m, C)
scipyDuration = time.time() - startTime
customResult = logpdf_custom(X, m, C)
scipyResult = multivariate_normal.logpdf(X, m, C)
print(f"функция: {customDuration:.6f}")
print(f"scipy: {scipyDuration:.6f}")
print(numpy.max(numpy.abs(customResult - scipyResult)))
