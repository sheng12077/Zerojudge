n=int(input())
datalst=[]
for i in range(n):
    data=input().split()
    for j in range(2):
        data[j]=int(data[j])
    datalst.append(data)
    
datalst=sorted(datalst)
for i in range(n):
    for j in range(2):
        print(datalst[i][j],end=' ')
    print()
#a915
