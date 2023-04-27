#include <iostream>
#include <vector>
#include <limits>
#include <utility>
#include <string_view>

#ifndef GRIDSYSTEM_H
#define GRIDSYSTEM_H

	//trying to have them paired instead of seperate.

	std::pair<unsigned int, unsigned int> Grid_Size{8, 5};

    //Below I am trying to access those values without typing all that code
	//using x_col = std::get<0>(Grid_Size); 
	//using y_row = std::get<1>(Grid_Size);

	unsigned int y_row {5};  // number of rows or y, working on replacing these with above
	unsigned int x_col {8};  // number of collums or x

	std::vector<std::vector<char>> Grid_Make();

	void clear_buffer();

	void print_grid(std::vector<std::vector<char>>& grid);

#endif