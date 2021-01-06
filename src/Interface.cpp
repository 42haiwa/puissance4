#include "Interface.h"

#include <iostream>

Interface::Interface() {
}

void Interface::drawInterface() {
    for (auto i{0}; i < ROWS; i++) {
        for (auto j{0}; j < COLS; j++) {
            std::cout << "[]";
        }
        std::cout << std::endl;
    }
}
