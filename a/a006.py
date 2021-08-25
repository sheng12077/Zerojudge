import math
n=input().split()
a=int(n[0])
b=int(n[1])
c=int(n[2])
d=b*b-4*a*c
if d<0:
  print("No real root")
elif d==0:
  x=(-b)/(2*a)
  print("Two same roots x=%d"%x)
else:
  x1=(-b+math.sqrt(d))/(2*a)
  x2=(-b-math.sqrt(d))/(2*a)
  print("Two different roots x1=%d , x2=%d"%(x1,x2))
#a006
