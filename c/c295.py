datalst=[]
Sum=[]
arr=[]
xy=input().split()
x=int(xy[0])
y=int(xy[1])
for i in range(x):
    n=[eval(i) for i in input().split()]
    datalst.append(n)
for i in range(x):
    Sum.append(max(datalst[i]))
s=sum(Sum)
print(s)
for i in range(x):
    if s%Sum[i]==0:
        arr.append(Sum[i])
if len(arr)==0:
    print('-1')
else:
    for i in range(len(arr)):
        print(arr[i],end=' ')
#c295
#apcs
