#include <iostream>
#include <vector>
#include <limits>
#include <utility>
#include <string_view>
#include "gridsystem.h"


void print_grid(std::vector<std::vector<char>>& grid, unsigned int& Y_row, unsigned int& X_col)
{
	for(unsigned int a {0}; a < Y_row; ++a) //loop through all y or rows
	{
		for(unsigned int b {0}; b < X_col; ++b)  // loop thorugh all x or collums
		{
			std::cout << grid[a][b] << " "; //print each element
		}
		std::cout << '\n';  // add a new line
	}
}

/*
int timer {0};
int clean_grid_time {0};


void timed_clean() //need to make a function or a loop, that has a loop that checks whether it is time to clean buffer, if so clean buffer, if not, recheck timer
{
	for
	{clear_buffer();}
}
*/

void clear_buffer()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}