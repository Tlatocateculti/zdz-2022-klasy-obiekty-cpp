#include "menu.h"

Menu::Menu() {
    osoby_index=0;
    magazyn_index=0;
}

string Menu::getOsoby() {
    string ret2="";
    for (int i=0;i<osoby_index;i++) {
        ret2+=osoby[i].getImie() + ", ";
    }
    return ret2;
}

bool Menu::setMenu() {
    cout << "Witaj w programie magazynowym, wybierz jedną z opcji:\n"
         << "1.Dodaj adres\n2.Dodaj osobę\n3.Dodaj magazyn\n4.Edytuj adres"
         << "\n5.Edytuj osobę\n6.Wyjdź z programu\nWybór: ";
    cin >> wybor;
    if (wybor==1) {
        Osoba tmp;
        string str="";
        cin >> str;
        tmp.setImie(str);
        zwiekszOsoby(tmp);
    }
    else if (wybor==5) {
       cout << getOsoby();
    }
    else if (wybor==6) {
        return true;
    }
    else    {
        cout << "Nieporawidłowy wybór, spróbuj ponownie.";
    }
    return false;
}


//PRIVATE DEFS

void Menu::zwiekszOsoby(Osoba o) {
    Osoba *tmp=new Osoba[++osoby_index];
    for (uint i=0;i<osoby_index-1;i++)
        tmp[i]=osoby[i];
    tmp[osoby_index-1]=o;
    osoby=tmp;
//        Osoba *tmp=new Osoba[++osoby_index];
//        Osoba *optr=&osoby[0];
//        int semindex=osoby_index-1;
//        while(semindex-->0) {
//            *(tmp++) = *(optr++);
//        }
//        *tmp=o;
//        osoby=tmp;
}
