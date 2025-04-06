#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a;
    cin >> b;

start:
    if(b == 0){
        cout << a;
        return 0;
    }

    int dzielnik = b;
    b = a % b;
    a = dzielnik;
    goto start;
}