#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x = 1.6544;
    double alfa_stopnie = 3.23;

    double alfa = alfa_stopnie * M_PI / 180.0;

    double licznik1 = log(x);
    double mianownik1 = sqrt(abs(sin(alfa) * x) + x);

    double ulamek1 = licznik1 / mianownik1;

    double ulamek2 = pow(x, 3) / tan(alfa);
    
    double ulamek3 = x / (x + 1);

    double y = ulamek1 - ulamek2 + ulamek3;

    cout << fixed << setprecision(4);
    cout << "Wynik y: " << y << endl;

    return 0;
}
