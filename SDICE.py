num = int(input())

for i in range(num):
    
    n = int(input())
    
    val = [20, 36, 51, 60]

    if n<=4:
        print(val[n-1])
    
    else:
        q = n//4
        r = n%4
        
        if r!=0:
            print((q-1)*44 + val[r-1] + r*11 + (4-r)*15)
        
        else:
            print((q-1)*44 + val[3])
