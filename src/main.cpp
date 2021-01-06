#include <iostream>
#include "Interface.h"

int main(void) {
	auto interface = Interface{};

	std::cout << "Bienvenue au puissance 4 !" << std::endl;
	std::cout << std::endl;
	interface.drawInterface();
}
