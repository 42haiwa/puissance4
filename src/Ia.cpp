#include "Ia.h"

Ia::Ia() {
}

int Ia::play() {
    auto randomGenerator = std::random_device{};
    auto generator = std::mt19937{randomGenerator()};
    auto distribution = std::uniform_int_distribution{0, 6};

    return distribution(generator);
}

std::string Ia::getColor() const {
    return color;
}
