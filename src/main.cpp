#include <iostream>
#include "Interface.h"
#include "Player.h"
#include "Ia.h"
#include "constantes.h"

/*
 *		Task:
 *			- Make ia
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

		position = player.play();
		interface.setChip(position, player.getColor());

		position = ia.play();
		interface.setChip(position, ia.getColor());
	}
}
