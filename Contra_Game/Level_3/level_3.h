#include <iostream>

#ifndef LEVEL_3_H
#define LEVEL_3_H

namespace level_3 
{
    bool level_active {false};

    std::string_view level_art_file {"level_3_art.txt"};
    int level_length {0};

    int player1_default_animation {1};
    int player2_default_animation {1};
    
    int player1_default_local {1};
    int player2_default_local {1};
}

#endif