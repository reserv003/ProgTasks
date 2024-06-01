n = int(input())
row = []

for i in range(n+1):
    row = [1] + row
    for j in range(1, len(row) - 1):
        row[j] += row[j + 1]
    print((n-len(row)) * ' ', end='')
    print(*row)