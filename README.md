gridsystem folder, comntains the code for the char grid to be printed long with some code at the end to tell the console to wait for input before closing.

levelToGrid. comntains the test code for grabbing art from files and printing them to a grid. There is some level art along with some old code in level.cpp which has become outdated due to new code in x_y_find_char folder.

protoSceneManager is currently empty. It is for developing the scenemanager talked about below.

x_y_find_char folder, comntains the test code for developing the position grid to char grid system. Takes a input of x,y and returns the name of the cooresponfding char as a string. stringTest.cpp is a test file, it is to test the concept on a smaller scale than the other files in the folder. It keeps all it's code in that one file, uses no headers, no other cpp files.

Contra Shell Hard Game.txt is for the Contra Game to be made with this engine. Once it ;s concept is done more, it will have it's own folder.

the other cpp, .h files, are either empty or contain old uneeded code except for main which though outdated will be used later on.

### Task list
. need to find a way to read the art files and get them char by char
. have to find a way to store art
. have to find a way to store game values, maybe csv
. bool grid
. make scenemanager that keeps only level and what is in it printed to prevent walk off screen/level. Having this, x >=0 && x <=30 && y >=0 && y <=10, only specafies where the player can move in the char grid, not where the level can be printed, when to stop printing level, printing empty space... Example, the player could go past the level and still be moving in the char space.
. come up with a function that moves level so player can go through level. Example, without this, the player would get to the end of the char and the level wouldn't go on. Need a function that has the level scroll at 1/3 of the screen and stops scrolling when level ends allowing player to move over all of screen until they go to left corner and then it gives 1/3 with 2/3 screen infront of player when they go left back through level.
. make it so player can go up and down in level
. create some sort of physics to enable jumping, falling, running, skidding... This could be done with a few variables.
. design the levels and gameplay of the game
. if need be, use sfml to grab console
. if need be, use sfml to provide arrow key movement
. create in game menu
. create selection menus for importing game, selecting them, and selecting levels in those games 
. create player animations (drawings and then code them to provide animation)
. check to see whether next move is valid withput changing current values
. create life bar
. player/level files one will have art another will give bool value for that art
. create player movement via wasd keys and std::cin
. should we have a char array/vector instead of a bunch of chars hand initilized?
. create player program the keeps track of where player is, current animation... Basically create the player files

#### (Re-Write In Progress)

Currently the idea is to make a Console Game Engine.

The game engine will have the char and position grids, plus the bool grid to enable collision,
and a scenemanager controlling where things can go, can't print outside of the print grid. Could do something like "x >=0 && x <=30 && y >=0 && y <=10"
might use a header file from sfml to grab control of the console due to we might have print speed issues due to how consoles work unless we grab control of it 
also some selection menus for importing games and selecting them and selecting levels in those games 
along with a exit menu

so far the rest would be left to each individual game.
when player is doing nothing, play standing animation
check to see whether next move is valid withput changing current values
life bar
player/level files one will have art another will give bool value for that art
game files can have a physics file to enable jumping, falling, running, skidding...

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

Also we need to provide a control file for levels. We need a info file that tells us where the player cannot go. Maybe we can have the enemies and other stuff as seperate level files to allow the enemies to move within the level. This will use the bool grid.