#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, x, y;

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;
    cout << "Podaj x: ";
    cin >> x;

    y = a * x * x + b * x + c;

    cout << "Y: " << y << endl;

    return 0;
}
