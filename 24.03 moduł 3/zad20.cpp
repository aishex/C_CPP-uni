#include <iostream>
using namespace std;

int main() {
    string tekst;
    cout << "Podaj napis: ";
    cin >> tekst;

    string reversed = string(tekst.rbegin(), tekst.rend());

    cout << (tekst == reversed ? "Palindrom" : "Nie palindrom.") << endl;

    return 0;
}
