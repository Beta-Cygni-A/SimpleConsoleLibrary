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

char printlevel(int x, int y)
{
    switch(y)
    {
        case 1:
        return char y_row {'a'};
        break;

        case 2:
        return char y_row {'b'};
        break;

        case 3:
        return char y_row {'c'};
        break;
        
        case 4:
        return char y_row {'d'};
        break;

        case 5:
        return char y_row {'e'};
        break;

        case 6:
        return char y_row {'f'};
        break;
        
        case 7:
        return char y_row {'g'};
        break;

        case 8:
        return char y_row {'h'};
        break;

        case 9:
        return char y_row {'i'};
        break;
        
        case 10:
        return char y_row {'j'};
        break;

        defualt:
        std::cerr << "switch match failed" << '\n';
        return;
    }
    return std::string_view loCAL {y_row + static_cast<char>(x)}
}