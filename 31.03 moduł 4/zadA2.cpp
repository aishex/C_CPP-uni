#include <iostream>

using namespace std;

int main() {
    double a, b, x, y;

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj x: ";
    cin >> x;

    y = a * x + b;

    cout << "Y: " << y << endl;

    return 0;
}
