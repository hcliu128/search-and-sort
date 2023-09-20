data = [8,7,9,6,5,2,3]

def selection_sort(data):
    count = 0
    for i in range(len(data)):
        count +=1
        min_index = i
        for j in range(i+1, len(data)):
            if(data[j]<data[min_index]):
                min_index = j
        (data[i], data[min_index]) = (data[min_index], data[i])
        print(f"{count}-switch:{data}")
            
        
if __name__ == '__main__':
    print(f"Original data = {data}")
    selection_sort(data)