#ifndef __PLAYER__H__
#define __PLAYER__H__

#include <string>
#include "constantes.h"

class Player {
    private:
        std::string color{ANSI_COLOR_YELLOW};
    public:
        Player();
        int play();
        std::string getColor() const;
};

#endif
