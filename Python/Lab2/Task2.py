n = 2**int(input())
a = [[1] * (i + 1) for i in range(n)]
for i in range(n):
    for j in range(1, i):
        a[i][j] = a[i-1][j-1] + a[i-1][j]
for i in range(n):
    print(' '*(n-i-1), end='')
    for j in range(i+1):
        if a[i][j] % 2 != 0:
            print('*', end=' ')
        else:
            print(' ', end=' ')
    print(' ')