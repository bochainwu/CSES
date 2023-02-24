data = [6, 10, 4, 10, 2, 8, 9, 2, 7, 7]
n = len(data)
a = 0
while n > 1:
    n-=1
    for i in range(n):        
        if data[i] > data[i+1]:  
            data[i], data[i+1] = data[i+1], data[i]
            a+=1
print(a)