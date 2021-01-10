#ifndef __IA__H__
#define __IA__H__

#include <string>
#include <random>
#include "constantes.h"

class Ia {
    private:
        std::string color{ANSI_COLOR_RED};
    
    public:
        Ia();
        int play();
        std::string getColor() const;
};

#endif
