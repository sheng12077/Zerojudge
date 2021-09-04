import sys

for s in sys.stdin:
	s=s.replace('/',"//")
	print(int(eval(s)))
#a017
