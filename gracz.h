#ifndef GRACZ_H
#define GRACZ_H

#include <string>

class Gracz {
public:
    Gracz(std::string imie);

    std::string imie;
    int kasa = 0;
    int portfel = 0; //kasa z wygranych rund
};

#endif