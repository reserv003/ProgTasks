with open('input3task.txt', 'r', encoding='utf-8') as file:
    list = []
    content = file.read()
    for i in content.split('\n'):
        list.append(i)
list.sort(key=lambda x: x[-1])
with open('outputoldest3task.txt', 'w', encoding='utf-8') as file:
    file.write(list[-1])
with open('outputyoungest3task.txt', 'w', encoding='utf-8') as file:
    file.write(list[0])