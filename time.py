import time
x = time.time()
end = x + input("Enter Seconds")
while(time.time() != end):
	print time.time()
	
