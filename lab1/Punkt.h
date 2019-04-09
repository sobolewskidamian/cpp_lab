//
// Created by Damian on 19.03.2019.
//

#ifndef LAB1_PUNKT_H
#define LAB1_PUNKT_H


#include <cstdlib>
#include <cmath>
#include <iostream>
#include <string.h>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

class Punkt {
private:
    double x, y, z;

public:
    static int licznik;

    Punkt() : x{(double) rand() / (RAND_MAX)}, y{(double) rand() / (RAND_MAX)}, z{(double) rand() / (RAND_MAX)} { licznik++; }

    Punkt(double x, double y, double z = 1.0) : x{x}, y{y}, z{z} { licznik++; };

    double getZ() { return z; }

    void setZ(double z) { this->z = z; }

    bool sprawdzCzyWiekszaOdleglosc(Punkt);

    void wypisz() { cout << x << ", " << y << ", " << z << endl; }

    static void setLicznik(int a) { licznik = a; }

    int iloscZnakow(double);

    void zapisz(ostream &);

    void wczytaj(istream &);
};

int Punkt::licznik = 0;

bool Punkt::sprawdzCzyWiekszaOdleglosc(Punkt point) {
    double odlThis = sqrt(x * x + y * y + z * z);
    double odlPoint = sqrt(point.x * point.x + point.y * point.y + point.z * point.z);
    return odlThis > odlPoint;
}

int Punkt::iloscZnakow(double a) {
    int it = 0;
    if (a == 0)
        it = 1;

    while (a > 0) {
        a /= 10;
        it++;
    }
    return it;
}

void Punkt::zapisz(ostream &os) {
    int xLen = iloscZnakow(x);
    int yLen = iloscZnakow(y);
    int zLen = iloscZnakow(z);
    for (int i = 0; i < 5 - xLen; i++)
        os << " ";
    os << setprecision(2) << fixed << x << "\t";

    for (int i = 0; i < 5 - yLen; i++)
        os << " ";
    os << setprecision(2) << fixed << y << "\t";

    for (int i = 0; i < 5 - zLen; i++)
        os << " ";
    os << setprecision(2) << fixed << z << endl;
}

void Punkt::wczytaj(istream &is) {
    string str;
    getline(is, str);

    vector<string> strings;
    istringstream iss(str);
    string actual;

    while (getline(iss, actual, '\t'))
        strings.push_back(actual);

    x = stod(strings[0]);
    y = stod(strings[1]);
    z = stod(strings[2]);
}

#endif //LAB1_PUNKT_H
