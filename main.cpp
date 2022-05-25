#include <iostream>

using namespace std;

class Adres {
    string kodPocztowy,
           miasto,
           ulica;
public:
    void setKodPocztowy(string kodPocztowy) {
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
    string getKodPocztowy() {
        return kodPocztowy;
    }

    void setMiasto(string miasto) {
        if (miasto.at(0) >= 'a' && miasto.at(0) <= 'z')
            miasto.at(0)=miasto.at(0)-'a' + 'A';
        for (int i=1;i<miasto.size();i++)
            if (miasto.at(i) >= 'A' && miasto.at(i) <= 'Z')
                miasto.at(i)=miasto.at(i)-'A' + 'a';
        this->miasto=miasto;
    }

    string getMiasto() {
        return miasto;
    }
};

class Osoba {
    string imie, nazwisko;
    int wiek;
public:
    void setImie(string imie) {this->imie=imie;}
    string getImie() {return imie;}
    void setNazwisko(string nazwisko);
    string getNazwisko();
    void setWiek(int w) {wiek=w;}
    int getWiek() {return wiek;}
};

int main()
{
    Osoba julek;
    julek.setImie("Stefan");
    julek.setWiek(67);
    cout << julek.getImie() << " ";
    cout <<  julek.getWiek() <<"\n" ;
    Adres a1,a2,a3;
    a1.setKodPocztowy("1234");
    cout << a1.getKodPocztowy() << "\n";
    a2.setKodPocztowy("12434");
    cout << a2.getKodPocztowy() << "\n";
    a3.setKodPocztowy("90-911");
    cout << a3.getKodPocztowy() << "\n";
    a1.setMiasto("gliwice");
    cout << a1.getMiasto() << "\n";
    a2.setMiasto("Warszawa");
    cout << a2.getMiasto() << "\n";
    a3.setMiasto("KALISZ");
    cout << a3.getMiasto() << "\n";
   // cout << "Hello World!" << endl;
    return 0;
}
