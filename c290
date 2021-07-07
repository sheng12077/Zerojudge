lst=[]
a=[]
b=[]
data=str(input())
for i in data:
    lst.append(i)
if len(lst)%2==1:
    for j in range(1,len(lst)-1,2):
        a.append(int(lst[j-1]))
        b.append(int(lst[j]))
    a.append(int(lst[(len(lst))-1]))
    A=sum(a)
    B=sum(b)
    ans=abs(A-B)
else:
    for j in range(1,len(lst),2):
        a.append(int(lst[j-1]))
        b.append(int(lst[j]))
    A=sum(a)
    B=sum(b)
    ans=abs(A-B)
print(ans)
#c290
#apcs
