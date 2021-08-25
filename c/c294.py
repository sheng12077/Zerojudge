data=input().split()

def select (data):
  for i in range(2):
    for j in range(i+1,3):
      if int(data[i])>int(data[j]):
        data[i],data[j]=data[j],data[i]

select(data)
for i in range(3):
  print(data[i],end=" ")


if int(data[0])+int(data[1])<int(data[2]):
  print("\nNo")
elif int(data[0])*int(data[0])+int(data[1])*int(data[1])<int(data[2])*int(data[2]): 
  print("\nObtuse")
elif int(data[0])*int(data[0])+int(data[1])*int(data[1])>int(data[2])*int(data[2]):
  print("\nAcute")
else:
  print("\nRight")

#c294
