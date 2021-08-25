while True:
    try:
        count=0
        n=int(input())
        if n==-1:
            break
        elif n==0:
            print('5')
        else:
            l=5+5*n
            while l>5:
                l=l-(((l-1)//5)+1)
                count=count+1
                ans=l+count
            print(ans)
    except:
        break
#a267
