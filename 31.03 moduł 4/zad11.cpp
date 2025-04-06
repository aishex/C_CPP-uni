#include <iostream>
#include <bitset>

using namespace std;

int main() {
    unsigned char num;
    cout << "Podaj liczbę 0-255: ";
    cin >> num;

    cout << "Liczba binarna: ";

    for (int i = 7; i >= 0; i--) {
        if (num & (1 << i)) {
            cout << "1";
        } else {
            cout << "0";
        }
    }

    return 0;
}
