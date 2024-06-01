import json
import csv
import os
def json_to_csv(json_file):
    with open(json_file, 'r') as f:
        data = json.load(f)
        root_name = list(data.keys())[0]
        csv_file = os.path.splitext(json_file)[0] + '_' + root_name + '.csv'

        with open(csv_file, 'w', newline='') as csv_f:
            writer = csv.writer(csv_f)
            headers = list(data[root_name][0].keys())
            writer.writerow(headers)
            for item in data[root_name]:
                writer.writerow([item[header] for header in headers])

        print(f'CSV файл успешно создан: {csv_file}')
json_to_csv(input())