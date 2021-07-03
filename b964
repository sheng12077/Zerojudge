def main():
  n=int(input())
  new=input().split()
  for i in range(n-1,-1,-1):
    for j in range(i):
      if int(new[j])>int(new[j+1]):
        new[j],new[j+1]=new[j+1],new[j]
  for i in range(n):
    print('%d' %(int(new[i])),end=' ')

  newdata=list(map(int,new))

  target=0

  if min(newdata)>60:
    print('\nbest case')
  else:
    for i in range(n):
      if (abs(60-newdata[i]))<(abs(60-target)) and newdata[i]<60:
        target=newdata[i]
    print('\n''%d'%(target))

  
 
  max=0
  for i in newdata:
    if (abs(max is None or i>max)):
      max=i

  target=min(newdata)
  if max<60:
    print('worst case')
  else:
    for i in range(n):
      if abs((60-newdata[i]))<(60-target) and newdata[i]>60:
        target=newdata[i]
      if newdata[i]==60:
        target=60
    print('%d'%(target))
      
main()

#b964  apcs
