#include <iostream>
#include <string>
#include "test.h"

void printgrid()
{
    std::cout <<
	a1 << a2 << a3 << a4 << a5 << '\n' <<
	b1 << b2 << b3 << b4 << b5 << '\n' <<
	c1 << c2 << c3 << c4 << c5 << '\n' <<
	d1 << d2 << d3 << d4 << d5 << '\n' <<
	e1 << e2 << e3 << e4 << e5 << '\n';
}

void modify_char(std::string)
{
    std::string a
    a1 = {'H'};
}



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