#ifndef MAGAZYN_H
#define MAGAZYN_H

#include "osoba.h"

class Magazyn {
private:
    string nazwa;
    double pojemnosc;
    Adres adres;
    Osoba *osoby;   //tablica
    unsigned int indexOsoby;

public:
    //CONSTRUCTORS
    Magazyn();
    Magazyn(string nazwa, double pojemnosc);
    Magazyn(string nazwa, string pojemnosc);

    inline string getNazwa() {return nazwa;}
    inline string getPojemnosc() {return "pojemnosc";}
    inline double getPojemnosc(bool d=true) {return 1;}
};

#endif // MAGAZYN_H
