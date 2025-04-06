#include <iostream>

int main() {
    int x = 10;
    int ILE = 2;

    for (int i = 0; i < x; i = i + ILE) {
        std::cout << "Iteracja: " << i << std::endl;
    }

    return 0;
}
