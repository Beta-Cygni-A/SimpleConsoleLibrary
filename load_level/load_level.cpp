#include <iostream>
#include <fstream>
#include <string_view>
#include "level.h"

//this is going to read from level.txt and put the first 5 charactars on each line as values for each correspong char grid space.

char loadlevel()
{
    std::ifstream read{"level.txt"};

    while (read)
    {
        char txtToChar;
        std::getline(read, txtToChar);
        std::cout << txtToChar << '\n';
    }
    return text;
}