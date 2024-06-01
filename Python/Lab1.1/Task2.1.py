n=int(input())
for i in range(n, 0, -1):
    for j in range(1, n+1):
        if j!=n:
            print(j,end='')
        else:
            print(j)
    n-=1