#ifndef ADRES_H
#define ADRES_H

#include <iostream>

typedef unsigned int uint;

using namespace std;

class Adres {
    //ZMIENNE
    string kodPocztowy,
           miasto,
           ulica;
public:
    //SETTER
    void setKodPocztowy(string kodPocztowy);
    void setMiasto(string miasto);
    void setUlica(string nazwa, string prefiks="ul");
    //GETTER
    inline string getMiasto() {return miasto;}
    inline string getUlica() {return this->ulica;}
    inline string getKodPocztowy() {return kodPocztowy;}



};

#endif // ADRES_H
