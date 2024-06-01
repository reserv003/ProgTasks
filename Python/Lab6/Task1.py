import csv
import os
import random

def Show(data, display_type='top', num_rows=5, separator=','):
    if display_type == 'bottom':
        data_to_display = data[-num_rows:]
    elif display_type == 'random':
        data_to_display = random.sample(data[1:], num_rows)
    else:
        data_to_display = data[1:num_rows+1]
    header = data[0]
    max_len_cols = [max(len(str(row[col_idx])) for row in data) for col_idx in range(len(data[0]))]
    for idx, value in enumerate(header):
        print(f"{value:<{max_len_cols[idx]}}", end=separator)
    print()
    for row in data_to_display:
        for col_idx, value in enumerate(row):
            print(f"{value:<{max_len_cols[col_idx]}}", end=separator)
        print()

def Info(data):
    num_rows = len(data) - 1
    num_cols = len(data[0])
    print(f"Размерность: {num_rows} x {num_cols}")
    header = data[0]
    for col_idx in range(num_cols):
        col_values = [row[col_idx] for row in data[1:]]
        non_empty_values = [value for value in col_values if value]
        try:
            non_empty_values[0] = int(non_empty_values[0])
        except ValueError:
            try:
                non_empty_values[0] = float(non_empty_values[0])
            except ValueError:
                non_empty_values[0] = non_empty_values[0]
        data_type = type(non_empty_values[0]).__name__

        print(f"{header[col_idx]:<10} {len(non_empty_values):<5} {data_type}")

def DelNaN(data):
    data = [row for row in data if all(row)]
    return data

def MakeDS(data):
    random.shuffle(data)
    split_idx = int(0.7 * len(data))
    learning_data = data[:split_idx]
    testing_data = data[split_idx:]
    if not os.path.exists('workdata/Learning'):
        os.makedirs('workdata/Learning')
    if not os.path.exists('workdata/Testing'):
        os.makedirs('workdata/Testing')
    with open('workdata/Learning/train.csv', 'w', newline='') as file:
        csv.writer(file).writerows(learning_data)

    with open('workdata/Testing/test.csv', 'w', newline='') as file:
        csv.writer(file).writerows(testing_data)

with open('Titanic.csv', newline='') as file:
    data = list(csv.reader(file))
Show(data, display_type='random', num_rows=5, separator=',')
Info(data)
DelNaN(data)
MakeDS(data)