//Zadanie 1_1

#include <stdio.h>

int main() {
    double podstawa, wynik = 1;
    int wykladnik;

    printf("Podaj podstawe: ");
    scanf("%lf", &podstawa);
    printf("Podaj wykladnik: ");
    scanf("%d", &wykladnik);

    if (wykladnik > 0) {
        for (int i = 0; i < wykladnik; ++i) {
            wynik *= podstawa;
        }
    }
    else if (wykladnik < 0) {
        for (int i = 0; i < -wykladnik; ++i) {
            wynik *= podstawa;
        }
        wynik = 1 / wynik;
    }

    printf("Wynik: %.0lf\n", wynik);

    return 0;
}
