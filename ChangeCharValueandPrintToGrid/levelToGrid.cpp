#include <iostream>
#include "levelToGrid.h"
#include "level.h"

int main()
{
	//loadlevel();

	printgrid();

	int x {5};
	int y {1};	

	/*
	This was for taking the string fromm test that has the char name based on x,y given 
	and taking that and using it to tell which char to change and to change that char
	*/
	modify_char(test(x,y));
	printgrid();

return 0;
}
