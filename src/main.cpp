#include <iostream>
#include "Interface.h"
#include "Player.h"
#include "IA.h"
#include "constantes.h"

/*
 *		Task:
 *			- Make ia
 */

int main(void) {
	auto interface = Interface{};
	auto player = Player{};
	auto position{0};
	auto ia = IA{};

	std::cout << ANSI_COLOR_GREEN << "Bienvenue au puissance 4 !" << std::endl;
	std::cout << std::endl;

	while (true) {
		interface.drawInterface();
		position = player.play();
		interface.setChip(position, player.getColor());
	}
}
