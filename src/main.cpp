#include <iostream>
#include "Interface.h"
#include "Player.h"
#include "Ia.h"
#include "constantes.h"

/*
 *		Task:
 *			- Win detection
 */

int main(void) {
	auto interface = Interface{};
	auto player = Player{};
	auto position{0};
	auto ia = Ia{};

	std::cout << ANSI_COLOR_GREEN << "Bienvenue au puissance 4 !" << ANSI_COLOR_RESET << std::endl;
	std::cout << std::endl;

	while (true) {
		interface.drawInterface();

		do {
			position = player.play();
		} while (interface.isColsComplete(position));

		interface.setChip(position, player.getColor());

		do {
			position = ia.play();
		} while (interface.isColsComplete(position));

		interface.setChip(position, ia.getColor());
	}
}
