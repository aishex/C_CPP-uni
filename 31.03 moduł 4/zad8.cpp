#include <iostream>
#include <bitset>

using namespace std;

int main() {
    unsigned char value = 0b00001011;
    cout << bitset<8>(value) << endl;

    value &= ~0b00000001;
    cout << bitset<8>(value) << endl;

    value |= 0b10000000;
    cout << bitset<8>(value) << endl;

    value |= 0b00000100;
    cout << bitset<8>(value) << endl;

    cout << "Bit 4: " << ((value & 0b00010000) ? "1" : "0") << endl;
    cout << "Bity 5 i 6: " << ((value & 0b01100000) ? "1" : "0") << endl;

    value ^= 0b00001000;
    cout << bitset<8>(value) << endl;

    value ^= 0b00001000;
    cout << bitset<8>(value) << endl;

    value <<= 2;
    cout << bitset<8>(value) << endl;

    return 0;
}
