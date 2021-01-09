#include <iostream>
#include "Interface.h"
#include "Player.h"

/*
 *		Task:
 *			- Add play systeme
 *			- Add game loop
 */

int main(void) {
	auto interface = Interface{};
	auto player = Player{};
	auto position{0};

	std::cout << "Bienvenue au puissance 4 !" << std::endl;
	std::cout << std::endl;

	while (true) {
		interface.drawInterface();
		int position = player.play();
		interface.setChip(position, player.getColor());
	}
}
