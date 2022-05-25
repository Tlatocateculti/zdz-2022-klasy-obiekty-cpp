#include "magazyn.h"

Magazyn::Magazyn() {
    indexOsoby=0;
    osoby = NULL;
}

Magazyn::Magazyn(string nazwa, double pojemnosc) {
    indexOsoby=0;
    osoby = NULL;
    this->nazwa=nazwa;
    this->pojemnosc=pojemnosc;
}

Magazyn::Magazyn(string nazwa, string pojemnosc) {
    indexOsoby=0;
    osoby = NULL;
    this->nazwa=nazwa;
    this->pojemnosc=pojemnosc;
}
