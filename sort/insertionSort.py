data = [1, 3, 2, 5, 0, 6]

def insertion_sort(data):
    count = 0
    for i in range(1, len(data)):
       count += 1
       key = data[i]
       j = i - 1
       while j >= 0 and key < data[j]:
            data[j+1] = data[j]
            j -= 1
       data[j+1] = key
       print(f"{count}-switch:{data}")

if __name__ == '__main__':
    print(f"Original data = {data}")
    insertion_sort(data)