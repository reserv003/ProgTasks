with open('input2task.txt', 'r') as file:
    list = []
    content = file.read()
    for i in content.split():
        list.append(int(i))
list.sort()
with open('output2task.txt', 'w') as file:
    for i in list:
        file.write(str(i))
        file.write('\n')