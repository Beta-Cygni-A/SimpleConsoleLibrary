/*
So the idea is to make it where the player can move across the screen in a enviorment in the console in C++
Now to break that down:

print scene

print character

alter scene

character movement

collision

scene manager with grid based logic movement
*/

int main()
{
	scenemanager();
	scene();
	character();
	movement();
	collision();
	gameplay();

return 0;
}
