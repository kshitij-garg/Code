class GRID(object):
	def __init__(self):
		grid =[("*","*","*"),("*","*","*"),("*","*","*")]
	def change(self,i,j,player):
		if(player == 1):
			grid[i][j] = "x"
		else:
			grid[i][j] = "o"
		
def check(grid):
	if(grid == [("","*","*"),("*","*","*"),("*","*","*")]

	

while(True):
	choice = input("Enter 1 to play a new game or 2 to exit")
	if(choice == 1):
		grid = GRID()
		for i in range 9 :
			if i%2 == 0:
				chance =raw_input("Player 1 Turn\n")
				grid.change(int(chance[0]),int(chance[1]),1)
			else:
				chance = input("Player 2 Turn\n")
				grid.change(int(chance[0]),int(chance[1]),2)
			flag = check(grid)
			if flag == 1:
				print "Player 1 wins\n"
				continue
			else if flag == 2:
				print "Player 2 wins\n"
				continue

