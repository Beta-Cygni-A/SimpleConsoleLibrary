#include <iostream>
#include <vector>
#include <limits>
#include <utility>
#include <string_view>
#include "gridsystem.h"

int main() //currently does not compile. test_grid does though. Grid_Make and print_grid need work. Having trouble returning grid and printing it
{
    Vec2DChar grid (y_row, std::vector<char> (x_col, 'x'));
    print_grid(grid, y_row, x_col);
    //clear_buffer();

    return 0;
}