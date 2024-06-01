n=int(input())
list=[]
for i in range(n):
    m=input()
    if m not in list:
        list.append(m)
        print('OK')
    else:
        print('REPEAT')