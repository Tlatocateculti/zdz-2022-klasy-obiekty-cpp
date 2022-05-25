#include "adres.h"

void Adres::setKodPocztowy(string kodPocztowy) {
    //cout << (kodPocztowy.size()!=5) << "\n";
    if (kodPocztowy.size()!=5 && kodPocztowy.size()!=6) {
        cout << "Nieokreślony kod pocztowy. Nie dodano.\n";
        return;
    }
    if (kodPocztowy.length()==5) {
        this->kodPocztowy=kodPocztowy.substr(0,2);
        this->kodPocztowy+="-";
        this->kodPocztowy+=kodPocztowy.substr(2,3);
    }
    else
        this->kodPocztowy=kodPocztowy;
}

void Adres::setMiasto(string miasto) {
    if (miasto.at(0) >= 'a' && miasto.at(0) <= 'z')
        miasto.at(0)=miasto.at(0)-'a' + 'A';
    for (int i=1;i<miasto.size();i++)
        if (miasto.at(i) >= 'A' && miasto.at(i) <= 'Z')
            miasto.at(i)=miasto.at(i)-'A' + 'a';
    this->miasto=miasto;
}

void Adres::setUlica(string nazwa, string prefiks) {
    for (int i=0;i<prefiks.size();i++)
        if (prefiks.at(i)=='.')
            prefiks.at(i)=' ';
    this->ulica= prefiks + ". " + nazwa;
}
