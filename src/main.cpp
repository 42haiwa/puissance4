#include <iostream>
#include "Interface.h"

/*
 *		Task:
 *			- Add play systeme
 *			- Add game loop
 */

int main(void) {
	auto interface = Interface{};

	std::cout << "Bienvenue au puissance 4 !" << std::endl;
	std::cout << std::endl;
	interface.drawInterface();
}
