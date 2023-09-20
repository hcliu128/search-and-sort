data = [8,7,9,6,5,2,3]

def bubble_sort(data):
    count = 0
    for i in range(len(data)):
        count +=1
        for j in range(len(data)-1):
            if(data[j]>data[j+1]):
                (data[j], data[j+1]) = (data[j+1], data[j])
        print(f"{count}-switch:{data}")
            
        
if __name__ == '__main__':
    print(f"Original data = {data}")
    bubble_sort(data)