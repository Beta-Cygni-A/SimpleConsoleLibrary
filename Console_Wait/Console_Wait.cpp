#include<iostream>
#include<limits>
#include"Console_Wait.h"

void Console_Wait()
{
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
}