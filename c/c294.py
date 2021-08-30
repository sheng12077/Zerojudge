data=input().split()



if int(data[0])+int(data[1])<int(data[2]):
  print("\nNo")
elif int(data[0])*int(data[0])+int(data[1])*int(data[1])<int(data[2])*int(data[2]): 
  print("\nObtuse")
elif int(data[0])*int(data[0])+int(data[1])*int(data[1])>int(data[2])*int(data[2]):
  print("\nAcute")
else:
  print("\nRight")

#c294
