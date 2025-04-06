#include <iostream>
#include <bitset>

using namespace std;

int main() {
    char c = 0b00000001;
    unsigned char uc = 0b00000001;
    int i = 1;

    cout << "Lewo (char):" << endl;
    for (int j = 0; j < 8; j++) {
        cout << bitset<8>(c) << endl;
        c <<= 1;
    }

    cout << "Prawo (char):" << endl;
    for (int j = 0; j < 8; j++) {
        cout << bitset<8>(c) << endl;
        c >>= 1;
    }

    cout << "Lewo (unsigned char):" << endl;
    for (int j = 0; j < 8; j++) {
        cout << bitset<8>(uc) << endl;
        uc <<= 1;
    }

    cout << "Prawo (unsigned char):" << endl;
    for (int j = 0; j < 8; j++) {
        cout << bitset<8>(uc) << endl;
        uc >>= 1;
    }

    cout << "Lewo (int):" << endl;
    for (int j = 0; j < 8; j++) {
        cout << bitset<16>(i) << endl;
        i <<= 1;
    }

    cout << "Prawo (int):" << endl;
    for (int j = 0; j < 8; j++) {
        cout << bitset<16>(i) << endl;
        i >>= 1;
    }

    return 0;
}
