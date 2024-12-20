#include "exo1006.h"

#include <stdio.h>

void getChar(char* a, char* b) {
    printf("Saisissez deux caracteres : \n");
    scanf(" %c\n %c", a, b);
}

void showChar(char a, char b) {
    printf("Premier caractere : %c / Deuxieme caractere : %c\n", a, b);
}

void exo1006() {
    char a, b;
    getChar(&a, &b);

    showChar(a, b);
    // Classic swap

    char c = a;
    a = b;
    b = c;

    showChar(a, b);
    // Arithmetic swap

    a += b;
    b = a - b;
    a -= b;

    showChar(a, b);
    // XOR swap

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    showChar(a, b);
}