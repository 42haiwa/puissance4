#include "Player.h"

#include <iostream>

Player::Player() {

}

int Player::play() {
    int position{0};
    
    do {
        std::cout << "Position (0-6)" << std::endl;
        std::cin >> position;
    } while (position < 0 || position > 6);

    return position;
}
