import sys
class Grid(object):

	def __init__(self):
		self.grid =['1','2','3','4','5','6','7','8','9']
	
	def changeSquare(self,block,player):
		if(player == 0):
				self.grid[ block-1 ] = "x"
		else:
				self.grid[ block-1 ] = "o"
	
	def printBoard(self):
		print '\n\n\n'
		print self.grid[0],self.grid[1],self.grid[2]
		print self.grid[3],self.grid[4],self.grid[5]
		print self.grid[6],self.grid[7],self.grid[8]
		print '\n\n\n'
	
	def checkBoard(self):
		status = False
		if ( self.grid[0] == self.grid[1] == self.grid[2] ) | (self.grid[3] == self.grid[4] == self.grid[5]) | (self.grid[6] == self.grid[7] == self.grid[8]) :
			status = True
		elif (self.grid[0] == self.grid[3] == self.grid[6]) | (self.grid[1] == self.grid[4] == self.grid[7]) | (self.grid[2] == self.grid[5] == self.grid[8]) :
			status = True
		elif(self.grid[0]==self.grid[4]==self.grid[8]) | (self.grid[2]==self.grid[4]==self.grid[6]) :
			status = True
		return status
def sysExit():
	sys.exit()

def playerWin(number):
        print 'Congratulations !! Player ' , number+1 , 'WINS'
	sysExit()

while True:
	choice = input("Enter 1 to play a new game or 2 to exit\n")
	if choice == 1:
		grid = Grid()
		for i in range(9) :
			square = input("Enter the Square Number\n")
			grid.changeSquare(square,i%2)
			grid.printBoard()
			result = grid.checkBoard()
			if result :
				playerWin(i%2)
		print '\n\nThe game is tied ! Try Again\n\n'
	else :
		print '\n\nExiting the Program\n\n'
		sysExit()

