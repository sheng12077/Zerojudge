pos=input()
pos=list(pos)
ans=[]

k=7
for i in range(0,len(pos)):
    ans.append(ord(pos[i]))
for j in range(0,len(pos)):
    ans.append(chr(ans[0]-7))
    ans.remove(ans[0])


for k in range(0,len(pos)):
    print(ans[k],end='')
#a009
#不是很懂
