#include <iostream>

#ifndef LEVEL_6_H
#define LEVEL_6_H

namespace level_6
{
    bool level_active {false};

    std::string_view level_art_file {"level_6_art.txt"};
    int level_length {0};

    int player1_default_animation {1};
    int player2_default_animation {1};
    
    int player1_default_local {1};
    int player2_default_local {1};
}

#endif