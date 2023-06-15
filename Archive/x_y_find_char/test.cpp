#include <iostream>
#include <string>
#include "test.h"

std::string test(int x,int y)
{
    char y_row {};

    switch(y)
    {
        case 1:
        y_row {'a'};
        break;

        case 2:
        y_row = {'b'};
        break;

        case 3:
        y_row = {'c'};
        break;
        
        case 4:
        y_row = {'d'};
        break;

        case 5:
        y_row = {'e'};
        break;

        case 6:
        y_row = {'f'};
        break;
        
        case 7:
        y_row = {'g'};
        break;

        case 8:
        y_row = {'h'};
        break;

        case 9:
        y_row = {'i'};
        break;
        
        case 10:
        y_row = {'j'};
        break;

        default:
            std::cerr << "switch match failed" << '\n';
            return "";
    }
    std::string loCAL {std::format("{}{}", y_row, x)}; 
    
    /*
    currently my compiler does not support std::format so got to update it but so far chatgpt thinks it's good, 
    helped me find the problems in my code, had three types of errors
    */
    return loCAL;
}