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
