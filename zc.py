import sys
class Grid(object):
	def __init__(self):
		self.grid =['1','2','3','4','5','6','7','8','9']
	
	def changeSquare(self,block,player):
		if(player == 1):
				self.grid[ block-1 ] = "x"
		else:
				self.grid[ block-1 ] = "o"
	
	def printBoard(self):
		print self.grid[0],self.grid[1],self.grid[2]
		print self.grid[3],self.grid[4],self.grid[5]
		print self.grid[6],self.grid[7],self.grid[8]

while True:
	choice = input("Enter 1 to play a new game or 2 to exit")
	if choice == 1:
		grid = Grid()
		for i in range(9) :
			square = input(" Enter the Square Number ")
			if i%2 == 0:
				grid.changeSquare(square,1)
			else:
				grid.changeSquare(square,2)
			
			print "After Chance ",i+1," the Board now looks like "
			grid.printBoard()
	if choice == 2:
		print "Final Board is "
		grid.printBoard()
		print "Thank you for Playing "
		sys.exit()
