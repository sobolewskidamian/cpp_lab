#include <iostream>
#include "obiekty.h"

using namespace std;

int main() {
    try {
        Terminarz t(2);
        Data d1(1, 1);
        Data d2(2, 2);

        cout<<t.zwroc_licznik()<<endl;
        t.dodaj_obiekt(d1);
        cout<<t.zwroc_licznik()<<endl;
        t.dodaj_obiekt(d2);
        cout<<t.zwroc_licznik()<<endl;

        Terminarz t2 = t;
        cout<<endl<<t.zwroc_licznik()<<endl;
        cout<<t2.zwroc_licznik()<<endl;

        Terminarz t3 = move(t2);
        cout<<endl<<t2.zwroc_licznik()<<endl;
        cout<<t3.zwroc_licznik()<<endl;

        Terminarz t4{t3};
        cout<<endl<<t3.zwroc_licznik()<<endl;
        cout<<t4.zwroc_licznik()<<endl;

        Terminarz t5{move(t4)};
        cout<<endl<<t4.zwroc_licznik()<<endl;
        cout<<t5.zwroc_licznik()<<endl;


        Data d3(1,12);
    }catch(string wyjatek){
        cout<<"Wyjatek: "<<wyjatek;
    }
    return 0;
}