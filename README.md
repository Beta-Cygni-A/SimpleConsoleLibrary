## Console Game Engine

### Repo Guide

gridsystem folder, contains the chars, std::map, and grid layout code. (Currently in works though there is usable archived code there)

load_level. contains the test code for grabbing art from files and printing them to a grid. There is some level art there.

SceneManager is currently empty. It is for the scenemanager talked about below.

x_y_find_char folder, contains the test code for developing the position grid to char grid system. Takes a input of x,y and returns the 
name of the cooresponfding char as a string. stringTest.cpp is a test file, it is to test the concept on a smaller scale than the other 
files in the folder. It keeps all it's code in that one file, uses no headers, no other cpp files.

Console_Wait folder, this has code that that clears buffer and waits for user input.

Contra Game folder, is for the Contra Game to be made with this engine.

### Documentation 

![Documentation](https://github.com/Beta-Cygni-A/ConsoleMovementExperiment/blob/main/Documentation.md)

### Task list
- move task list to issues, open a issue for each task
- finish task list and readme/engine design
- design the levels and gameplay of the game
- replace alot of the int inputs/returns with references or pointers