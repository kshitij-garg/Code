class Num(object):
	def __init__(self ,num):
		self.num = num
	def prnt(self):
		print self.num
	def add(self,a):
		self.num+=a
	def sub(self,b):
		self.num-=b

nu = Num(5)
nu.prnt()
nu.add(4)
nu.prnt()
nu.sub(3)
nu.prnt()
