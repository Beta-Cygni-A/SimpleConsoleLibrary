#include <iostream>

#ifndef LEVEL_4_H
#define LEVEL_4_H

namespace level_4 
{
    bool level_active {false};

    std::string_view level_art_file {"level_4_art.txt"};
    int level_length {0};

    int player1_default_animation {1};
    int player2_default_animation {1};
    
    int player1_default_local {1};
    int player2_default_local {1};
}

#endif