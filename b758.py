time=0
hour=0
minute=0
data=input().split()
for i in range(2):
  data[i]=int(data[i])

time=data[0]*60+data[1]+150
hour=time//60
minute=time-hour*60
if hour >=24:
  hour=hour-24


if hour <10:
  if minute==0:
   print('0''%d'':'"00"%(hour))
  else:
   print('0''%d'':''%d'%(hour,minute))
else:
  if minute==0:
    print('%d'':'"00"%(hour))
  else:
    print('%d'':''%d'%(hour,minute))
#b758 
