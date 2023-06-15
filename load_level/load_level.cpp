#include <iostream>
#include <fstream>
#include <string_view>
#include "level.h"

loadlevel(int a, int b, int c, std::string_view d)
{
    int y_cord {a}; //states what y_row the wanted char is in
    int x_cord {b}; //states what x_row the wanted char is in
    int temp_level_length {c}; //states how long the level is
    char text {' '};

    std::ifstream level_art_read{d}; //read art file

    for (int y_count {0}; y_cord < y_count; ++y_count) //keep grabbing lines till get to right line
    {
        std::vector<char> temp_art_store (temp_level_length, ' '); //a bunch of chars to hold the grabbed line char by char
        std::getline(level_art_read, temp_art_store); //grab line

        text = temp_art_store[x_cord]; //give text the value of the right char from the line
    }

    grid[y_cord][x_cord] = text;
}