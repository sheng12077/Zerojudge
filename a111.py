ans=0
while True:
  n=int(input())
  if n == 0:
    break
  else:
    for i in range(n+1):
      ans=ans+i*i
    print(ans)
    ans=0
#a111
