#include <iostream>
using namespace std;

int main() {
    int zapalki = 11;
    int proba;
    bool tura = true;

    cout << "\nGra w '11 zapalek'" << endl;
    cout << "Zasady: dwoch graczy na zmiane bierze 1, 2 lub 3 zapalki. Przegrywa ten, kto wezmie ostatnia." << endl << endl;
    cout << "Zaczyna gracz 1" << endl;

    while (zapalki > 0) {
        cout << "\nPozostalo zapalek: " << zapalki << endl;
        if (tura) {
            cout << "Gracz 1 -> wybierz 1, 2 lub 3 zapalki: " << endl;
        } else {
            cout << "Gracz 2 -> wybierz 1, 2 lub 3 zapalki: " << endl;
        }
        cin >> proba;

        if (proba < 1 || proba > 3 || proba > zapalki) {
            cout << "Niewlasciwy ruch. Wybierz 1, 2 lub 3 zapalki." << endl << endl;
            continue;
        }
        zapalki -= proba;
        tura = !tura;
    }

    if (tura) {
        cout << "Gracz 1 wygral!" << endl;
    } else {
        cout << "Gracz 2 wygral!" << endl;
    }

    cout << "Nacisnij Enter, zeby zakonczyc." << endl;
    cin.ignore();
    cin.get();

    return 0;
}
