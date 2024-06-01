n=int(input())
c=0
for i in range(n, 0, -1):
    for j in range(n, 0, -1):
        if j==n:
            print(' '*c,j,end='')
        elif j > 0:
            print(j,end='')
        else:
            break
    for j in range(2, n+1):
        if j < n:
            print(j, end='')
        else:
            print(j)
            c+=1
    n-=1