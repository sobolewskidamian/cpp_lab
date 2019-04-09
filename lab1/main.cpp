#include <iostream>
#include "Punkt.h"

int main() {
    Punkt p = Punkt(1.1,233.21);
    p.wypisz();
    p.zapisz(cout);
    cout<<endl<<endl;

    p.wczytaj(cin);
    p.zapisz(cout);

    Punkt p2 = Punkt(1,2);
    p2.zapisz(cout);
    cout<<p.sprawdzCzyWiekszaOdleglosc(p2)<<endl;

    Punkt p3 = Punkt();
    p3.zapisz(cout);
    cout<<p3.getZ()<<endl;
    p3.setZ(12.43);
    p3.zapisz(cout);

    cout<<endl<<p.licznik;
    p3.setLicznik(23);
    cout<<endl<<p.licznik;
    return 0;
}