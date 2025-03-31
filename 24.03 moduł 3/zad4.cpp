/*Zadanie 4
Napisz program wczytujący ze standardowego wejścia współczynniki równania 
kwadratowego z jedną niewiadomą i wypisujący na standardowym wyjściu wszystkie 
rozwiązania tego równania. Jeśli brak rozwiązań - program ma o tym odpowiednio 
poinformować. Dla przypomnienia równanie kwadratowe można opisać tak: ax2+bx+c=0. 
Zwrócić uwagę na grupowanie instrukcji przy warunkach.*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Podaj wspolczynniki rownania kwadratowego (a, b, c): ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Nie moze byc 0" << endl;
    } else {
        double delta = b * b - 4 * a * c;

        if (delta > 0) {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Dwa rozwiazania: " << x1 << " i  " << x2 << endl;
        } else if (delta == 0) {
            double x = -b / (2 * a);
            cout << "Jedno rozwiazanie: " << x << endl;
        } else {
            cout << "Brak rozwiazan" << endl;
        }
    }

    return 0;
}
