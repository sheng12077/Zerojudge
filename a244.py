for i in range(int(input())):
    data=input().split()
    if int(data[0])==1:
        print(int(data[1])+int(data[2]))
    elif int(data[0])==2:
        print(int(data[1])-int(data[2]))
    elif int(data[0])==3:
        print(int(data[1])*int(data[2]))
    else:
        print(int(data[1])//int(data[2]))
 #a244
