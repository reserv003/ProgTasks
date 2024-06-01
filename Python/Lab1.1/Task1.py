x=int(input())
y=int(input())
z=int(input())
max=x
min=x
if y>=max:
    max=y
elif y<=min:
    min = y
if z>=max:
    max=z
elif z<=min:
    min = z
print('max =',max, 'min =', min)