nd=input().split()
for i in range(len(nd)):
  nd[i]=eval(nd[i])
n=nd[0]
d=nd[1]

datalst=[]
for i in range(n):
  data=input().split()
  for j in range(3):
    data[j]=eval(data[j])
  datalst.append(data)


number_of_purchase=0
cost=0
M=0
m=0
for i in range(n):
  M=max(datalst[i])
  m=min(datalst[i])
  if M-m>=d:
    number_of_purchase=number_of_purchase+1
    buy=(datalst[i][0]+datalst[i][1]+datalst[i][2])/3
    cost=cost+buy

print('%d'' ''%d'%(number_of_purchase,cost))
#f605 apcs
