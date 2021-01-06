#ifndef __INTERFACE__H__
#define __INTERFACE__H__

#include <array>

#include "constantes.h"

class Interface {
    private:
        static constexpr auto COLS{7};
        static constexpr auto ROWS{6};

        std::array<std::array<std::string, COLS>, ROWS> grids;
    public:
        Interface();
        void drawInterface();
};

#endif
