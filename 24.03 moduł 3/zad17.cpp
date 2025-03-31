#include <iostream>
using namespace std;

int main() {
    int N, zgadywana, odpowiedz;

    cout << "Podaj zakres (N): ";
    cin >> N;

    cout << "Wybierz liczbę z przedziału 1.." << N << " i zapisz ją. Komputer będzie zgadywał." << endl;

    zgadywana = 1;

    while (true) {
        cout << "Czy to liczba " << zgadywana << "? (1 - tak, 0 - za duzo, 2 - za malo): ";
        cin >> odpowiedz;

        if (odpowiedz == 1) {
            cout << "Komputer zgadł Twoją liczbę: " << zgadywana << "!" << endl;
            break;
        } else if (odpowiedz == 0) {
            zgadywana--;
        } else if (odpowiedz == 2) {
            zgadywana++;
        } else {
            cout << "Niepoprawna odpowiedź! Wpisz 1, 0 lub 2." << endl;
        }
    }

    return 0;
}
