### Documentation

Currently the idea is to make a Console Game Engine/Library.

When the game starts, a loading screen is displayed and then the game menu. On this menu you can select player amount, options, and game guide.

Player amount is only a function with cout, cin, a var and only accepts a range of whatever the game allows. 
Game guide is a function that prints game_guide.txt to screen. 
Options menu has various settings such as volume, difficulty level, life count, other features could be added like language. Audio support will be
done using a third party library. We can have audio during start up, menu screen, level, throughout the whole game, but that is in the game design 
part not the engine. Just come up with a function that plays selected music. There will be a startup function which will have logo of engine, gamedev
team/company, and will play music if the bools for each of those are set to true and sources provided in startup.cpp.

Note: There will be an exit function that exits program on esc, and a back function to allow movement to previous menu. There will be an in game 
menu activated by ctrl-shift-p. Selection of things on menu is done by typing the appropriate number say menu might say "1.Player Amount" then 
user would type "1" and Player Amount part of the menu would be selected. In game menu will have options for volume control, game guide, level specs, 
hints, exit level, restart level. 

Volume will be just a function that has cout, var, cin, and only accepts a range of 0-100. 
Difficulty level will be done same way except with range of 1-3 for easy, medium, hard. 
Life count will be done same way with range dictated by game. 

Once user has selected player amount, a new menu is shown, it asks new or old game. If old game, it comes to menu where you can select old games 
saved. If new game, game is started, new save file is made. There will be a game data folder that will hold the saved game files and each level 
will have a save file for it. This save file will hold what score player has gotten each time they have fully completed that level, how many times 
they have done the level, how many hidden items, things they accomplished like say found a special hidden object, that would go into a list of 
collected items. 

There will be a temp file that will keep track of in game data that will only be saved duirng gameplay say player breaks wall, that will only be 
recorded for that play and no longer. If a item that can be carried with player, it will be recorded in the player inventory in player data file 
seperate from the level file. 

Game data could be stored in a csv file (comma seperated values), or variables in a header.

Before the level starts, a loading screen will be displayed. When the game level starts, a message will be displayed, displaying level data like 
what level, name of level, and the level data we have saved along with loading screen probably before the level. The loading screen will have 
game tips and a loading icon. Sometimes in game only loading icon will be shown say when you have found a special object or are at a checkpoint. 
Checkpoint data is the same data kept when finishing a level except it is only for a checkpoint which is part of a level. When level is completed, 
or new checkpoint made, previous checkpoint is deleted and replaced with new checkpoint or end of level data. 

The first thing to be printed to the screen is the level and then the player and all the interactable objects from bushes to enemies to water. 
The player, enemy, vehicles, bullets, obstacles, all interactable objects will have their own art files, code, and will be classes. Every time 
when the screen is reprinted, the scene is printed in order above. Currently I'm thinking 30 frames per secound. 

The level will have a control plain text file that is the same as the level except with no blank spaces, all spaces are full of symbols telling us where 
things can be printed, where player, enemies, bullets, and stuff can go and where they can't.

"G" stands for ground (nothing can go below ground), "0" means anything can go there, "C" only computer controlled objects, enemies, bullets may go 
here, other symbols will be made as needed. 

Each object will have it's own collision. In game objects say a vehicle or enemy or bush or wall, they can be interacted with and will provide and 
check their own collision. When anything moves even a rock, that specfic object will check collison around itself for every char move. If a bullet 
is moving, it will check for collision even when it hits player, the bullet will be reporting the hit not the player even if the player is checking 
collison due to player collison only checks if it can move to next spot not whether there is a bullet there or an enemy since the bullet and the enemy 
would check for that kind of collision. All objects however, do check the level file that tells where things can and can't go. For a object to detect
collision with another object, the object checking collision will look at the (x,y) of all current moveable objects. This or the program can have a 
function that comes up with the (x,y) for each variable of the object if it were to be moved in the direction and the amount in that direction. It will
take these temp variables and compare them to all current (x,y) values of all moveable objects. If a match is made, say it was a bullet checking and the
match was a player, the player would lose a life point. If a match is not made and the object is allowed to move to spot by level control, then object 
can move.


Chat-GPT's suggestions on my Collision "a couple of suggestions for further improvement: Consider implementing a broad-phase collision detection algorithm
to improve performance. This algorithm can quickly eliminate pairs of objects that are far apart and don't need to be checked for collisions. There are 
several algorithms available, such as spatial partitioning and sweep and prune. Make sure that your collision detection code is optimized for performance. 
This can be especially important in games where there may be many objects on the screen at once. Some ways to optimize collision detection include using 
data structures like quad trees or hashing to quickly look up objects, and avoiding unnecessary calculations.".

#### (REWRITE IN PROGRESS. Gridsystem is now being made via 2D vectors makeing mapping uneeded. You can use the access grid function to change chars).
Art to console gridsystem is comprised of chars, that are printed in a specfic layout to form the game screen, being mapped so that I can corelate the 
returned string from the x_y_to_char and have that name corespond to the char of the same name so that specfic char value can be changed. After the char 
has been changed, when screen is reprinted, the new char valuie will be printed to screen and thus art on screen is implmented. 

Art is stored in plain text file. Art is to be made with ASCII characters and everything will be treated as a char including whitespaces. Program using getline, 
std::map and char counter, will grab the file line by line unitl it comes to the proper y_row and then it will then go along that string until it comes 
across the char in the right x_row.

Since the grid is adjustable that means we need to have a function that given a (x,y) value creates the neccesary amount of chars using vectors, laysout 
those chars in certain way to be printed, adjusts the std::map to match the grid, and then we need the (x,y) to char name system to work as well. It will 
be complex but it will make it quite easy on those using this engine.

The scenemanager keeps only level and what is in it printed inside of the grid, to prevent walk off screen/level. Having this, 
x >=0 && x <=30 && y >=0 && y <=10, only specafies where the player can move in the char grid, not where the level can be printed, when to stop 
printing level, printing empty space... Example, the player could go past the level and still be moving in the char space.

For the player, movement via WASD keys and std::cin or use sfml file to allow use of arrow keys. There will be a switch player character function. 
A player data file keeps track of where player is, current animation, inventory, life count, bullet amount... When player is doing nothing, play 
standing animation. Player location will be stored in a collection of variables that keeps track of where the player is printed in x,y. When 
player moves, all x,y values in player are increase or decreased by whatever value to provide up, down, foward and backwards movement. Player's
starting position is determined by game. 

There will be a weapon class for players and in game characters to use. It will have a damage variable, distance variable, longevity variable for how long 
weapon lasts, a bool for whether player can drop object, and a bool for if the object is collectable for inventory across levels.

Animations can be done by making the art and then coding it just like a stopmotion.

Changes in stance say raises arm or crouches are diffrent character animations that will be printed. The character sprite manager controls what character 
sprite to print and handles changing sprites. Say the player is standing and they move to a crouching position. Current (x,y) values keep track of 
where every part of the spirte is printed currently. When the spirte is changed, the x,y values will change due to different animation. But player 
will still be in the same position due to the (x,y) conversion function for each animation which will chnage the amount of player postion vars and
change their values but still keep player in same place.

In the level, health of bosses, and enemies with significant health will be printed at top of screen. Players health, score, some quick access 
inventory, current deployed gear, will be displayed at topleft corner.

Each level has a art plain text file. Only the current part of the level the size of the grid is printed to the screen via the char grid. As the player 
moves, when player gets to 1/3 of screen from left, background starts to move at player speed. Player can not move farther than 1/3 of the 
screen unless level ends and then player can go to end.

Each level can have a physics file to enable jumping, falling, running, skidding...

Every so often use the clear buffer function to flush the buffer.

Might use header file from sfml or oldconsoleengine to grab control of the console due to might have print speed issues due to how consoles work unless 
we grab control of it. Also, you have the problem of console waits for user input so....yeah need to grab that console.

Replacement of inputs/returns with references is for efficency due to current is done by copying the value instead of passing/looking at original value.
Copying costs perfomance and due to being a copy, it can be diffrent from the value copied and if you make changes to it, it will only be to the copy.