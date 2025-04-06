#include <iostream>
#include <bitset>

using namespace std;

int main() {
    char signedChar = 126;
    unsigned char unsignedChar = 126;

    cout << "Signed char:" << endl;
    cout << "Wartość: " << int(signedChar) << bitset<8>(signedChar) << endl;

    signedChar = signedChar >> 1;
    cout << "1 bit w prawo: " << int(signedChar) << bitset<8>(signedChar) << endl;

    signedChar = 126; 
    signedChar = signedChar << 1;
    cout << "1 bit w lewo: " << int(signedChar) << bitset<8>(signedChar) << endl;

    signedChar = 126;
    signedChar = signedChar << 3;
    cout << "3 bity w lewo: " << int(signedChar) << bitset<8>(signedChar) << endl;

    cout << "\nUnsigned char:" << endl;
    cout << "Wartość: " << int(unsignedChar) << bitset<8>(unsignedChar) << endl;

    unsignedChar = unsignedChar >> 1;
    cout << "1 bit w prawo: " << int(unsignedChar) << bitset<8>(unsignedChar) << endl;

    unsignedChar = 126;
    unsignedChar = unsignedChar << 1;
    cout << "1 bit w lewo: " << int(unsignedChar) << bitset<8>(unsignedChar) << endl;

    unsignedChar = 126;
    unsignedChar = unsignedChar << 3;
    cout << "3 bity w lewo: " << int(unsignedChar) << bitset<8>(unsignedChar) << endl;

    return 0;
}
