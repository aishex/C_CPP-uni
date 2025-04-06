#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, alfa;

    cout << "Podaj x: ";
    cin >> x;
    cout << "Podaj alfa: ";
    cin >> alfa;

    double alfa_rad = alfa * M_PI / 180.0;

    y = (sqrt(x * x + 7) / (2 * x)) - (x * x) + (sin(alfa_rad) / abs(x * x * x));

    cout << "Wynik: " << y << endl;

    return 0;
}
