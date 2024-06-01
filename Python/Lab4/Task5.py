n=int(input())
ids=[]
prdcts=[]
cnts=[]
out=[]
for i in range(n):
    ids.append(input("Введите ID покупателя: "))
    prdcts.append(input("Введите название товара: "))
    cnts.append(input("Введите ко-во товара: "))
for i in range(len(ids)):
    if ids[i] not in out:
        print("Список покупок покупателя", ids[i]+":")
        for j in range(n):
            if ids[i] == ids[j]:
                print(prdcts[j], cnts[j])
        out.append(ids[i])