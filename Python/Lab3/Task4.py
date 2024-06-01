n=int(input())
list=[]
for i in range(n):
    s=input()
    list.insert(i, s)
li=[]
[li.append(x) for x in list if x not in li]
dict={}
for i in range(len(li)):
    dict[i]=li[i]
for i in range(len(dict)):
    a = 0
    for j in range(len(list)):
        if dict[i]==list[j]:
            a+=1
    print(a,'', end='')