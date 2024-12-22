#include <stdio.h>

int main(void) {

    int aVal = 5;
    int *a = &aVal;
    int b = 2;
    int c = 4;
    int dVal = 3;
    int *d = &dVal;
    int eVal = 9;
    int *e = &eVal;
    int fVal = 7;
    int *f = &fVal;
    int gVal = 6;
    int *pgVal = &gVal;
    int **g = &pgVal;
    int hVal = 8;
    int *h = &hVal;

    printf("\n2+*a = %d", 2 + *a);       // Ajoute 2 à la valeur pointée par 'a'
    printf("\nb*c = %d", b * c);         // Multiplie les valeurs 'b' et 'c'
    printf("\n*d*2 = %d", *d * 2);       // Multiplie par 2 la valeur pointée par 'd'
    printf("\n3**e = %d", 3 * *e);       // Multiplie par 3 la valeur pointée par 'e'
    printf("\n*f***g = %d", *f * **g);   // Multiplie la valeur pointée par 'f' par la valeur doublement pointée par 'g'
    *h = **g;                            // Affecte la valeur doublement pointée par 'g' à la valeur pointée par 'h'
    printf("\n*h = **g donc *h = hVal = %d\n", *h);

    return 0;
}