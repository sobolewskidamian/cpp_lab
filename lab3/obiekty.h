//
// Created by Damian on 02.04.2019.
//

#ifndef LAAB3_OBIEKTY_H
#define LAAB3_OBIEKTY_H

using namespace std;

class Data {
private:
    int dzien, miesiac;

public:
    Data(int dzien = 1, int miesiac = 1) : dzien{dzien}, miesiac{miesiac} {
        if (dzien < 1 || dzien > 31 || miesiac < 1 || miesiac > 12)
            throw string{"Blednie zapisana data\n"};
    };
};

class Terminarz {
private:
    int rozmiar;
    int licznik;
    Data *tab;

public:
    Terminarz(int rozmiar = 6) : rozmiar{rozmiar}, licznik{0}, tab{new Data[rozmiar]} {};

    Terminarz(const Terminarz &);

    Terminarz(Terminarz &&);

    ~Terminarz() { delete[] tab; }

    Terminarz &operator=(const Terminarz &);

    Terminarz &operator=(Terminarz &&);

    int zwroc_licznik() const { return this->licznik; }

    void dodaj_obiekt(const Data &);
};


#endif //LAAB3_OBIEKTY_H
