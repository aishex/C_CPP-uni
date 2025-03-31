/*Zadanie 14
Napisz program kalkulator, wykonujący wskazaną przez użytkownika operację arytmetyczną na dwóch
wczytanych wcześniej liczbach. Zbuduj odpowiednie menu z opcjami wyboru działania oraz zakończenia programu.*/

#include <iostream>
using namespace std;

int main() {
    double a, b, wynik;
    int wybor;

    cout << "\nKalkulator" << endl << endl;

    cout << "Wprowadz pierwsza liczbe: ";
    cin >> a;

    cout << "Wprowadz druga liczbe: ";
    cin >> b;

    cout << "Wprowadz numer, co chcesz zrobic: " << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "5. Opusc program" << endl;
    cin >> wybor;

    switch(wybor){
        case 1:
            wynik = a+b;
            cout << "Wynik dodawania: " << wynik << endl;
            break;
        case 2:
            wynik = a-b;
            cout << "Wynik odejmowania: " << wynik << endl;
            break;
        case 3:
            wynik = a*b;
            cout << "Wynik mnozenia: " << wynik << endl;
            break;
        case 4:
            if (b != 0) {
                wynik = a/b;
                cout << "Wynik dzielenia: " << wynik << endl;
                break;
            } else {
                cout << "Nie mozna dzielic przez zero" << endl;
                break;
            }
        case 5:
            cout << "Opuszczanie programu.." << endl;
            break;
        default:
            cout << "Niepoprawny wybor" << endl;
    }
}