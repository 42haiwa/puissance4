#include "Interface.h"

#include <iostream>

Interface::Interface() {
    for (auto i{0}; i < ROWS; i++) {
        for (auto j{0}; j < COLS; j++) {
            grids[i][j] = "O";
        }
    }
}

void Interface::drawInterface() {
    for (auto i{0}; i < ROWS; i++) {
        for (auto j{0}; j < COLS; j++) {
            std::cout << "[" << grids[i][j] << "]";
        }
        std::cout << std::endl;
    }
}
