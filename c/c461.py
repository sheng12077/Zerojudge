def main():
  data=input().split()
  for i in range(3):
    data[i]=int(data[i])
    data[i]=bool(data[i])
  flag=False
  if (data[0] and data[1])==data[2]:
    print('AND')
    flag=True  
  if (data[0] or data[1])==data[2]:
    print('OR')
    flag=True  
  if (data[0]^data[1])==data[2]:
    print('XOR')
    flag=True
  if not flag:
    print('IMPOSSIBLE')  
main()
#c461 apcs
