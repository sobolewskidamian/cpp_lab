//
// Created by Damian on 26.03.2019.
//

#ifndef LAB2_OBIEKTY_H
#define LAB2_OBIEKTY_H

#include <iostream>

using namespace std;

class Macierz;

class Wektor {
private:
    double x, y;

public:
    Wektor() : x{0}, y{0} {};

    Wektor(double x, double y) : x{x}, y{y} {};

    friend ostream &operator<<(ostream &, const Wektor &);

    Wektor operator+(const Wektor &);

    void operator+=(const Wektor &);

    Wektor &operator++();

    const Wektor operator++(int);

    bool operator==(const Wektor &);

    double &operator[](int);

    friend Macierz;
};

class Macierz {
private:
    double a, b, c, d;

public:
    Macierz() : a{0}, b{0}, c{0}, d{0} {};

    Macierz(double a, double b, double c, double d) : a{a}, b{b}, c{c}, d{d} {};

    friend ostream &operator<<(ostream &, const Macierz &);

    friend Macierz operator*(const Macierz &, int);

    friend Macierz operator*(int, const Macierz &);

    Macierz operator-();

    explicit operator double() const { return a * d - b * c; }

    Wektor operator*(const Wektor &);
};


#endif //LAB2_OBIEKTY_H
