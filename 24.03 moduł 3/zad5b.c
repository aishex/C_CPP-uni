/*Zadanie 5b
Napisać program obliczający sumę odwrotności kwadratów kolejnych 
liczb naturalnych (1/n^2) od 1 do 100 000 000 oraz od 100 000 000 do 1. 
Zaobserwować różnicę. Wynik wyświetlać za pomocą cout i printf. 
Program skompilować na 3 różnych kompilatorach/systemach 
(np linux/windows, kompilator online) i wskazać ewentualne różnice. */

#include <stdio.h>

int main() {
    long long int N = 100000000;
    double sum1 = 0.0, sum2 = 0.0;

    for (long long int i = 1; i <= N; i++) {
        sum1 += 1.0 / (i * i);
    }

    for (long long int i = N; i >= 1; i--) {
        sum2 += 1.0 / (i * i);
    }

    printf("Suma odwrotności kwadratów (1 do 100000000): %.15f\n", sum1);
    printf("Suma odwrotności kwadratów (100000000 do 1): %.15f\n", sum2);

    return 0;
}
