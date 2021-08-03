n=int(input())
ans=0
data=input().split()
for i in range(n):
    data[i]=int(data[i])
for i in range(n):
    ans+=data[i]*(i+1)
print(ans)
#b294
