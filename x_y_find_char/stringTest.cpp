#include <iostream>
#include <string>
#include <format>
//once this compiles, delete this file
int main()
{
	int x {5};
	int y {1};	
	char y_row {'y'};
    std::string loCAL {std::format("{}{}", y-row, x)};
//so far I can create and print values above. I can cout y_row + x to print "y5". Now to make a string that is made of y_row + x and print it. 
	std::cout << loCAL << x << '\n';
	return 0;
}