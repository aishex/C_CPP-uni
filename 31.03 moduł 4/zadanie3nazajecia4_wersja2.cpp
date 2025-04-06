#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a;
    cin >> b;

start:
    switch (b) {
        case 0:
            cout << a;
            return 0;
        default:
            int dzielnik = b;
            b = a % b;
            a = dzielnik;
            goto start;
    }
}