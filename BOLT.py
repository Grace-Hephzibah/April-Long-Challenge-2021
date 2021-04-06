x = int(input())

for i in range (x):
    
    statement = input().split()
    
    l = []
    
    for j in statement:
        l. append(float(j))
        
    if ( round( ( 100 / (l[0] * l[1] * l[2] * l[3] ) ) , 2) < 9.58):
        print("YES")
        
    else:
        print("NO")
