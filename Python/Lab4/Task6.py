n=input()
n=n.split()
n.sort()
wrds=[]
cnt=[]
for i in range(len(n)):
    if n[i] not in wrds:
        k=0
        for j in range(len(n)):
            if n[i]==n[j]:
                k+=1
        wrds.append(n[i])
        cnt.append(k)

for i in range(len(wrds)-1):
    for j in range(len(wrds)-1):
        if cnt[j+1]>cnt[j]:
            tmp1=cnt[j]
            tmp2=wrds[j]
            cnt[j]=cnt[j+1]
            wrds[j]=wrds[j+1]
            cnt[j+1]=tmp1
            wrds[j+1]=tmp2

for i in range(len(wrds)):
    print(wrds[i], cnt[i])