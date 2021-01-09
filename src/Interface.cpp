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
    for (auto i{0}; i < COLS; i++) {
        std::cout << " " << i << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    for (auto i{0}; i < COLS; i++) {
        std::cout << " | ";
    }
    std::cout << std::endl;
    for (auto i{0}; i < COLS; i++) {
        std::cout << " v ";
    }
    std::cout << std::endl;
    std::cout << std::endl;

    for (auto i{0}; i < ROWS; i++) {
        for (auto j{0}; j < COLS; j++) {
            std::cout << "[" << grids[i][j] << "]";
        }
        std::cout << std::endl;
    }
}

void Interface::setChip(float const & position, std::string const & color) {
    std::array<std::array<std::string, COLS>, ROWS> chipPosition;

    for (auto i{0}; i < ROWS; i++) {
        if (chipPosition[position][i] != "O") {
            chipPosition[position][i] = color + "O" + ANSI_COLOR_RESET;
        }
    }
}
