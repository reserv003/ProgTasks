list=[]
n=input()
n=n.split(' ')
for i in range(len(n)):
    if n[i] not in list and n[i].isdigit():
        list.append(n[i])
print(len(set(list)))