while True:
  try:
    datalst=[]
    newlst=[]
    rc=input().split()
    r=int(rc[0])
    c=int(rc[1])
    for i in range(r):
      n=input().split()
      for j in range(c):
        n[j]=int(n[j])
      datalst.append(n)

    newlst=[[None]*r for i in range(c)]

    for i in range(c):
     for j in range(r):
       newlst[i][j]=int(datalst[j][i])

    for i in range(c):
      for j in range(r):
       print('%d'%(newlst[i][j]),end=' ')
      print()
  except:
    break
#a015
