n=input().split()
list=[]
for i in range(len(n)):
    print(list.count(n[i]), end=' ')
    list.append(n[i])
