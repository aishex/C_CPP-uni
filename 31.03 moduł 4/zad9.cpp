#include <iostream>

using namespace std;

int main() {
    const int size = 100;
    unsigned char arr[size];

    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }

    unsigned char result = 0;
    for (int i = 0; i < size; i++) {
        result ^= arr[i];
    }

    cout << int(result) << endl;

    return 0;
}
