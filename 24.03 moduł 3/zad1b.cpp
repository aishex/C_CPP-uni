/*Zadanie 1b
Napisz program podnoszący podaną podstawę do podanego wykładnika (czyli potęga).
Utwórz trzy wersje z pętlą for, while oraz do..while. Uwzględnij dodatnie jak i
ujemne podstawy oraz wykładniki.*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double podstawa, wykladnik, wynik = 1;
    
    cout << "Podaj podstawę: ";
    cin >> podstawa;
    cout << "Podaj wykładnik: ";
    cin >> wykladnik;

    // for
    for (int i = 0; i < abs(wykladnik); ++i) wynik *= podstawa;

    // while
    int i = 0;
    while (i < abs(wykladnik)) { wynik *= podstawa; i++; }

    // do while
    i = 0;
    do { wynik *= podstawa; i++; } while (i < abs(wykladnik));

    if (wykladnik < 0) wynik = 1 / wynik;

    cout << "Wynik: " << wynik << endl;
    return 0;
}
