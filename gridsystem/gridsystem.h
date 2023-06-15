#include <iostream>
#include <vector>
#include <limits>
#include <utility>
#include <string_view>

#ifndef GRIDSYSTEM_H
#define GRIDSYSTEM_H

	using Vec2DChar = std::vector<std::vector<char>>;

	inline unsigned int y_row {5};  // number of rows or y, working on replacing these with above
	inline unsigned int x_col {8};  // number of collums or x
	
	void clear_buffer();

	void print_grid(std::vector<std::vector<char>>& grid, unsigned int& y_row, unsigned int& x_col);

#endif