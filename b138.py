count=0
data=input().split()
for i in range(10):
    data[i]=int(data[i])
    
n=int(input())
n=n+30
for i in range(10):
    if data[i]<=n:
        count+=1
    else:
        continue
print(count)
#b138
