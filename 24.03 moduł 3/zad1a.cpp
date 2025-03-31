/* Zadanie 1a
Napisz program będący emulatorem funkcji XOR (Exclusive OR) dla dowolnej ilości argumentów. 
Użytkownik wprowadza dane czyli znaki z klawiatury. Naciśnięcie klawisza Enter kończy wprowadzanie. 
Program powinien posiadać zabezpieczenie w postaci takiej, że przyjmuje tylko zera i jedynki, 
należy także zliczać błędne znaki jakie może wprowadzać użytkownik. Wprowadzanie błędnych znaków nie może 
przerywać działania programu oraz wpływać niekorzystnie na obliczenia. W podsumowaniu program ma podać 
ilość wprowadzonych jedynek oraz ilość błędnych znaków, jakie wprowadził użytkownik. */

#include <iostream>
using namespace std;

int main() {
    string input;
    int onesCount = 0, invalidCount = 0, result = 0;
    
    while (getline(cin, input)) {
        if (input.empty()) break;
        for (char ch : input) {
            if (ch == '0' || ch == '1') {
                result ^= ch - '0';
                if (ch == '1') onesCount++;
            } else invalidCount++;
        }
    }

    cout << result << endl;
    cout << onesCount <<  endl; 
    cout << invalidCount << endl;
    return 0;
}
