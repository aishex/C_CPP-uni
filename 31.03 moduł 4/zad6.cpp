#include <iostream>

using namespace std;

int main() {
    int wartosc1 = 15;
    int wynik1 = wartosc1 << 4;
    cout << "15 << 4 = " << wartosc1 << endl;

    // w prawo
    int wartosc2 = -128;
    int wynik2 = wartosc2 >> 1;
    cout << "-128 >> 1 = " << wynik2 << endl;

    // w lewo
    int wynik3 = wartosc2 << 1;
    cout << "-128 << 1 = " << wynik3 << endl;

    int wartosc3 = 11;
    int maska = 0b11000;
    if (wartosc3 & maska) {
        cout << "Jest ustawiony." << endl;
    } else {
        cout << "Nie jest ustawiony." << endl;
    }

    return 0;
}
