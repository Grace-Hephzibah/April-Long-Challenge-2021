x = int(input())

for i in range(x):
    
    l = input().split()
    
    a = []
    for j in l:
        a. append(int(j))
        
    string = input()
    
    count = 0
    for i in string:
        if i == '*':
            count += 1
            if count == a[1]:
                break
        else:
            count = 0
            
    if count == a[1]:
        print("YES")
        
    else:
        print("NO")
            
