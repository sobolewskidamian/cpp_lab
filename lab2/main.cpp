#include <iostream>
#include "obiekty.h"

using namespace std;

int main() {
    Wektor w1(1, 2);
    Wektor w2(3, 4);
    cout << w1;
    cout << w2;

    cout << (w1 + w2);

    w1 += w2;
    cout << w1;

    Macierz m1(1, 2, 3, 4);
    cout << m1;
    cout << (m1 * 3);
    cout << (3 * m1);

    cout << w1;
    w1++;
    cout << w1;
    ++w1;
    cout << w1;
    cout << (w1++);
    cout << w1;

    cout << m1;
    cout << (-m1);
    cout << m1;

    cout << w1;
    cout << w1[0] << " " << w1[1] << endl << endl;

    cout << (double) m1<<endl<<endl;


    cout<<w1;
    cout<<m1;
    cout<<m1*w1;

    return 0;
}