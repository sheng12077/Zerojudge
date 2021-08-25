datalst=[]
n=int(input())
for i in range(n):
  data=input().split()
  for j in range(5):
    data[j]=int(data[j])
  datalst.append(data)


for i in range(n):
  if ((datalst[i][2])*60+datalst[i][3])-((datalst[i][0]*60)+datalst[i][1])>=datalst[i][4]:             #用>不會過用>=才會
   print('Yes')
  else:
   print('No')
#b572
