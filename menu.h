#ifndef MENU_H
#define MENU_H

#include "magazyn.h"

class Menu {
    int wybor;
    Osoba *osoby;
    Magazyn *magazyn;
    unsigned int osoby_index, magazyn_index;

    void zwiekszOsoby(Osoba o);
public:
    Menu();

    string getOsoby();

    bool setMenu();


};

#endif // MENU_H
