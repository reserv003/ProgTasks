with open('input1task.txt', 'r') as file:
    content = file.read()
    n = 1
    for i in content.split():
        n = n*int(i)
with open('output1task.txt', 'w') as file:
    file.write(str(n))