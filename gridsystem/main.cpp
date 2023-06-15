#include <iostream>
#include <vector>
#include <limits>
#include <utility>
#include <string_view>
#include "gridsystem.h"

int main()
{
    Vec2DChar grid (y_row, std::vector<char> (x_col, 'x'));
    print_grid(grid, y_row, x_col);
    //clear_buffer();

    return 0;
}