mos_dict={
".-":"A","-...":"B","-.-.":"C","-..":"D",".":"E",
"..-.":"F","--.":"G","....":"H","..":"I",".---":"J",
"-.-":"K",".-..":"L","--":"M","-.":"N","---":"O",
".--.":"P","--.-":"Q",".-.":"R","...":"S","-":"T",
"..-":"U","...-":"V",".--":"W","-..-":"X","-.--":"Y",
"--..":"Z",}

n=int(input())
for i in range(n):
    mos_arr=[]
    mos_str=input().split()
    for j in range(len(mos_str)):
        mos_arr.append(mos_str[j])
    for k in range(len(mos_str)):
        print(mos_dict[mos_arr[k]],end="")
    print()
#b515
