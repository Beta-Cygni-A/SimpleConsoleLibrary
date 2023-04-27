#include <iostream>
#include <vector>
#include <string_view>

int main()
{
	unsigned int y {5};  // number of rows or y
	unsigned int x {8};  // number of collums or x

	std::vector<std::vector<char>> grid (y, std::vector<char> (x, 'x')); // creating 2D vector

	for(unsigned int a {0}; a < y; ++a) //loop through all y or rows
	{
		for(unsigned int b {0}; b < x; ++b)  // loop thorugh all x or collums
		{
			std::cout << grid[a][b] << " "; //print each element
		}
		std::cout << '\n';  // add a new line
	}

	return 0;
}