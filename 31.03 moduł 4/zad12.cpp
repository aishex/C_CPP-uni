#include <iostream>

using namespace std;

int main() {
    unsigned int number, bit;

    cout << "Podaj liczbę 0-255: ";
    cin >> number;

    if (number > 255) {
        cout << "Niepoprawna liczba" << endl;
        return 1;
    }

    cout << "Podaj numer bitu (0..7): ";
    cin >> bit;

    if (bit > 7) {
        cout << "Niepoprawny numer bitu" << endl;
        return 1;
    }

    cout << ((number & (1 << bit)) ? "TAK" : "NIE") << endl;

    return 0;
}
