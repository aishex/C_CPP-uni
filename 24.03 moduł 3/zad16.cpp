#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int liczba, odgadnieta;
    
    srand(time(0));
    liczba = rand() % 100 + 1;

    cout << "Odgadnij liczbe z przedzialu 1-100" << endl;
    
    while (true) {
        cout << "Podaj liczbe (0, aby zakonczyc): ";
        cin >> odgadnieta;

        if (odgadnieta == 0) {
            cout << "Wylosowana liczba to: " << liczba << endl;
            break;
        }

        if (odgadnieta < liczba) {
            cout << "Za mala" << endl;
        } else if (odgadnieta > liczba) {
            cout << "Za duza" << endl;
        } else {
            cout << "Poprawna liczba" << endl;
            break;
        }
    }

    return 0;
}
