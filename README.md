###Task list
.
.


so what we can do is make a 5*5 block of chars and then we can create a program to manage the scene and character.

so first the program starts and asks new game or old game

if old game then it loads old game file.
The player file has a option list for what level to choose from.
each level has a art file. part of the level is printed to the screen via the char grid. 
As the player moves, when player gets to 1/3 of screen from left, background starts to move at player speed. 
Player can not move farther than 1/3 of the screen unless level ends and then player can go to end.
Once scene is printed, player is printed. There will be a collison detection system that checks whether anything like a bullet or platform is printed in spot where player is going to move. 
When bullet moves, it checks whether or not the space it is going to move into is taken. If it is taken, then bullet stops. If bullet touches player, player dies.
So first I am going to make a system where chars are given new value from level file and printed. Then Print character, and then try to get the character to be able to move.
Might have it read it into an array

take a 9*9 grid for example. Player movement can be controlled as follows:
up = Player_Position - T_Row
down = Player_Position + T_Row
right = Player_Position - S_Row
left = Player_Position + S_Row

1 2 3 4 5 6 7 8 9
2 4
3
4
5
6
7
8
9

so now I need to coralate the number grid with the char grid

we got three options
make this for one size window
make window size by programmer or user specification
make it change size depending on level size

have a t_row and a s_row char vector array
have a t_row and a s_row int vector array

have a player program that remebers where player is location wise

have switch statement that takes an int from t_row + s_row and finds the matching switch statement that sends character to matching char to be printed

have defualt starting point for chracter and that will help provide base for profragm can character move to next spot. 
before printing to that char, program will check if that char is safe to print to.
might also use sfml or oldconsoleengine or some thi g to grab control of console
have level load program that loads only the console size amount of the level

we need better int/char scene manager grid system. We need to do it by x,y. So we find what t_row, then what s_row and then search through something to find a match. The match will tell us what char it corresponds to. Now we have a positioning and printing combined, scenemanager is born.

try making a char grid with vectors

then do the same in ints or can they be combined in one?

also could just have char grid and have program that takes x and y value, stores x, runs y through switch stament to find match, then once match found return y+x as string. Then this string is the name of the char to be printed to.
Also we need to provide a control file for levels. We need a info file that tells us which one can the player not print over, actually level is fine have the enemies and other stuff as seperate printings well except if you have platfroms but that can be in info file
also need to have where it keeps track of what is printed where to see if thing can be printed in certain place.
