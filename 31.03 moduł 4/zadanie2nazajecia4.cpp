    #include <iostream>
    #include <bitset>
    using namespace std;

    int main() {
        int liczba, pozycja, wybor;
        
        cout << "Podaj liczbe: ";
        cin >> liczba;
        
        cout << "Podaj pozycje: ";
        cin >> pozycja;

        cout << "Wybor: 1 - ustaw, 0 - zeruj: ";
        cin >> wybor;
        
        if (wybor == 1) {
            liczba = liczba | (1 << pozycja);
        } else {
            liczba = liczba & ~(1 << pozycja);
        }
        
        cout << "Binarny: " << bitset<32>(liczba) << endl;

        return 0;
    }
