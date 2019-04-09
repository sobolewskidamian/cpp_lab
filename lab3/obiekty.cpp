//
// Created by Damian on 02.04.2019.
//
#include <iostream>
#include "obiekty.h"

using namespace std;

Terminarz::Terminarz(const Terminarz &t) : rozmiar{t.rozmiar}, licznik{t.licznik}, tab{new Data[rozmiar]} {
    copy(t.tab, t.tab + rozmiar, tab);
}

Terminarz::Terminarz(Terminarz &&t) : rozmiar{t.rozmiar}, licznik{t.licznik}, tab{t.tab} {
    t.rozmiar = 0;
    t.licznik = 0;
    t.tab = nullptr;
}

Terminarz &Terminarz::operator=(const Terminarz &t) {
    if (this == &t) return *this;
    delete[] tab;
    rozmiar = t.rozmiar;
    licznik = t.licznik;
    tab = new Data[rozmiar];
    copy(t.tab, t.tab + rozmiar, tab);
    return *this;
}

Terminarz &Terminarz::operator=(Terminarz &&t) {
    if (this == &t) return *this;
    delete[] tab;
    rozmiar = t.rozmiar;
    licznik = t.licznik;
    tab = t.tab;
    t.rozmiar = 0;
    t.licznik = 0;
    t.tab = nullptr;
    return *this;
}

void Terminarz::dodaj_obiekt(const Data &d){
    if(licznik == rozmiar)
        throw string{"Osiagnieto maksymalna liczbe elementow w tablicy\n"};

    tab[licznik++] = d;
}