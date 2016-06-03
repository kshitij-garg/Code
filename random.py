import random
import msvcrt
def wait():
	num = msvcrt.getch()
	return num
while(True):
	num = raw_input()
	x = random.randint(0,10000)
	if(x%2 == 0):
		print("-->")
	else:
		print("<--")

