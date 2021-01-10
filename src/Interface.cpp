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
    #ifdef WINDOWS
        system("cls");
    #else
        system("clear");
    #endif

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
    for (int i{ROWS - 1}; i >= 0; i--) {
        if (grids[i][position] == "O") {
            grids[i][position] = color + "O" + ANSI_COLOR_RESET;
            break;
        }
    }
}

bool Interface::isColsComplete(int position) const {
    for (auto i{0}; i < ROWS; i++) {
        if (grids[i][position] == "O") {
            return false;
        }
    }
    return true;
}
