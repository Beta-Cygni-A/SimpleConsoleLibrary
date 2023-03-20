###Task list
.
.

####(Re-Write In Progress)

so first the program starts and asks new game or old game

if old game then it loads old game file.
The player file has a option list for what level to choose from.
Each level has a art file. Part of the level is printed to the screen via the char grid. 
As the player moves, when player gets to 1/3 of screen from left, background starts to move at player speed. 
Player can not move farther than 1/3 of the screen unless level ends and then player can go to end.
Once scene is printed, player is printed. There will be a collison detection system that checks whether anything like a bullet or platform is printed in spot where player is going to move. 
When bullet moves, it checks whether or not the space it is going to move into is taken. If it is taken, then bullet stops. If bullet touches player, player dies.
So first I am going to make a system where chars are given new value from level file and printed. Then Print player character, and then try to get the player to be able to move.

should we have a char array/vector instead of a bunch of chars hand initilized?

have a player program that remembers where player is location wise like a file or collection of variables that keeps track of where the player is printed in x,y. When player moves, all x,y values in player are increase or decreased by whatever value to provide up, down, foward and backwards movement. Changes in stance say raises arm or crouches are diffrent character animations that will be printed. So we will need a character sprite manager to choose what character sprite to print.

If the new program works, the switch statement that takes an x,y, and finds the matching switch statement for int y, which then gives what char y row y equals which is then combined with x and returned as a string. Example player position in x,y is "3,3". That would be returned in the form y,x as "c3" due to this is how the char names are written. This allows us to combine a postion system with where it gets printed on the screen.

Have defualt starting point for character and that will help provide base so character can move to next spot. 
When player is told to move, before printing to next char, program will check if that char is safe to print to.
might also use sfml or oldconsoleengine or some thing to grab control of console.
have level load program that loads only the console size amount of the level.

So we need to come up with a x,y limit to keep the player on the screen, inside the char grid.

Also we need to provide a control file for levels. We need a info file that tells us where the player cannot go. Maybe we can have the enemies and other stuff as seperate level files to allow the enemies to move within the level.