//
// Created by Damian on 26.03.2019.
//

#include <iostream>
#include "obiekty.h"

using namespace std;

ostream &operator<<(ostream &output, Wektor const &wektor) {
    return output << wektor.x << "\t" << wektor.y << endl << endl;
}

Wektor Wektor::operator+(const Wektor &wektor) {
    Wektor temp;
    temp.x = x + wektor.x;
    temp.y = y + wektor.y;
    return temp;
}

void Wektor::operator+=(const Wektor &wektor) {
    x += wektor.x;
    y += wektor.y;
}

Wektor &Wektor::operator++() {
    x++;
    y++;
    return *this;
}

const Wektor Wektor::operator++(int) {
    Wektor temp = *this;
    ++*this;
    return temp;
}

bool Wektor::operator==(const Wektor &wektor) {
    return x == wektor.x && y == wektor.y;
}

double &Wektor::operator[](int i) {
    if (i == 0)
        return x;
    else
        return y;
}

ostream &operator<<(ostream &output, Macierz const &macierz) {
    return output << macierz.a << "\t" << macierz.b << endl << macierz.c << "\t" << macierz.d << endl << endl;
}

Macierz operator*(const Macierz &macierz, int x) {
    return {macierz.a * x, macierz.b * x, macierz.c * x, macierz.d * x};
}

Macierz operator*(int x, const Macierz &macierz) {
    return {macierz.a * x, macierz.b * x, macierz.c * x, macierz.d * x};
}

Macierz Macierz::operator-() {
    return {a * (-1), b * (-1), c * (-1), d * (-1)};
}

Wektor Macierz::operator*(const Wektor &wektor) {
    return {a * wektor.x + b * wektor.y, c * wektor.x + d * wektor.y};
}

