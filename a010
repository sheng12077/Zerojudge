while True :
    a = input()
    try :
        int(a)
    except :
        print('不是整数哦')
    else :
        a = int(a)
        b = 2
        time = 0
        ans = ''
        while a > 1 :
            c = 0
            while True :
                if a % b== 0 :
                    c += 1
                    a /= b
                else :
                    if c==0 :
                        break
                    elif c == 1 :
                        if  not time == 0 :
                            ans = ans + ' * '
                        ans = ans + str(b)
                        time += 1
                        break
                    else :
                        if  not time == 0 :
                            ans = ans + ' * '
                        ans = ans + str(b) + '^' + str(c)
                        time += 1
                        break
            b += 1
        else :
            print(ans)


#a010
#不是很懂
