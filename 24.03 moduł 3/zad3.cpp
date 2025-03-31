/* Zadanie 3
Funkcja liniowa ma równanie y=ax+b. Napisać program wyliczający miejsce zerowe dla 
dowolnego równania liniowego ax+b=0 — program wczytuje współczynniki a i b 
(są to dowolne liczby rzeczywiste) i wyświetla wynik. Program powinien na samym początku 
wyświetlić krótką informację o jego przeznaczeniu oraz zatrzymać swoje wykonanie po 
wyświetleniu wyniku — do czasu naciśnięcia klawisza Enter. Zwrócić uwagę na grupowanie 
instrukcji przy warunkach.*/

#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Program wylicza miejsce zerowe funkcji liniowej ax + b = 0" << endl;
    
    cout << "Podaj wspolczynnik a: ";
    cin >> a;
    cout << "Podaj wspolczynnik b: ";
    cin >> b;

    if (a == 0) {
        if (b == 0) {
            cout << "Nieskonczenie wiele rozwiazan." << endl;
        } else {
            cout << "Brak rozwiazan." << endl;
        }
    } else {
        double x = -b / a;
        cout << "Miejsce zerowe wynosi: " << x << endl;
    }

    return 0;
}
