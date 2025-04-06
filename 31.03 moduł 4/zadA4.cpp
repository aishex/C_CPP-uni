#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = -10, b = 10, x = (a + b) / 2;
    while (fabs(x * x - 4 * x + 3) > 1e-6) {
        x -= (x * x - 4 * x + 3) / (2 * x - 4);
    }
    cout << "Ekstrema x = " << x << ", f(x) = " << x * x - 4 * x + 3 << endl;
    return 0;
}
