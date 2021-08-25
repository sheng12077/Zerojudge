dic = { "A": 10, "J": 18, "S": 26,
        "B": 11, "K": 19, "T": 27,
        "C": 12, "L": 20, "U": 28,
        "D": 13, "M": 21, "V": 29,
        "E": 14, "N": 22, "W": 32,
        "F": 15, "O": 35, "X": 30,
        "G": 16, "P": 23, "Y": 31,
        "H": 17, "Q": 24, "Z": 33,
        "I": 34, "R": 25
}
count=0
data=str(input())
data=str(dic[data[0]])+str(data[1:])

for i in range(1,10,1):
    count+=int(data[i])*(10-i)
    
count=count+int(data[0])+int(data[10])
if count%10==0:
    print("real")
else:
    print("fake")
#a020
