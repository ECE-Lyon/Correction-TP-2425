#include <stdio.h>

int main(void) {

    int v1 = 10;
    float v2 = 5.0f;
    double v3 = 6.75;
    char v4 = 'A';

    int* p1 = &v1;
    float* p2 = &v2;
    double* p3 = &v3;
    char* p4 = &v4;
    char** p5 = &p4;

    printf("\nLe pointeur p1 pointe sur %d", *p1);      // Affiche la valeur pointée par 'p1'
    printf("\nLe pointeur p2 pointe sur %.2f", *p2);    // Affiche la valeur pointée par 'p2'
    printf("\nLe pointeur p3 pointe sur %.2f", *p3);    // Affiche la valeur pointée par 'p3'
    printf("\nLe pointeur p4 pointe sur %c", *p4);      // Affiche la valeur pointée par 'p4'
    printf("\nLe pointeur p5 pointe sur %p et pointe doublement sur %c\n", *p5, **p5);  // Affiche la valeur pointée et doublement pointée par 'p5'

    return 0;
}