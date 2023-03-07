#include <iostream>
#include <string>
#include "test.h"

string test(int x,int y)
{
    switch(y)
    {
        case 1:
        char y_row {'a'};
        break;

        case 2:
        char y_row {'b'};
        break;

        case 3:
        char y_row {'c'};
        break;
        
        case 4:
        char y_row {'d'};
        break;

        case 5:
        char y_row {'e'};
        break;

        case 6:
        char y_row {'f'};
        break;
        
        case 7:
        char y_row {'g'};
        break;

        case 8:
        char y_row {'h'};
        break;

        case 9:
        char y_row {'i'};
        break;
        
        case 10:
        char y_row {'j'};
        break;

        defualt:
            std::cerr << "switch match failed" << '\n';
            return;
    }
    std::string loCAL {y_row + static_cast<char>(x)};
    return loCAL;
}