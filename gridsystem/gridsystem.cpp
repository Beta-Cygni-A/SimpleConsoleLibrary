#include <iostream>
#include <vector>
#include <limits>
#include <utility>
#include <string_view>
#include "gridsystem.h"

std::vector<std::vector<char>> Grid_Make()
{
	std::vector<std::vector<char>> grid (y_row, std::vector<char> (x_col, 'x')); // creating 2D vector

	return grid;
}


void print_grid(std::vector<std::vector<char>>& grid)
{
	for(unsigned int a {0}; a < y_row; ++a) //loop through all y or rows
	{
		for(unsigned int b {0}; b < x_col; ++b)  // loop thorugh all x or collums
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
	{clear_buffer();}
}
*/

void clear_buffer()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}