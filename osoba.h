#ifndef OSOBA_H
#define OSOBA_H

#include "adres.h"

class Osoba {
    string imie, nazwisko;
    int wiek;
    Adres *adres;
public:
    inline void setImie(string imie) {this->imie=imie;}
    inline void setNazwisko(string nazwisko) {this->nazwisko=nazwisko;}
    inline void setWiek(int w) {wiek=w;}

    inline string getImie() {return imie;}
    inline string getNazwisko() {return nazwisko;}
    inline int getWiek() {return wiek;}
    inline Adres *getAdres() {return this->adres;}
};

#endif // OSOBA_H
