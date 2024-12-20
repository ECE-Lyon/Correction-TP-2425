#include <stdio.h>

int main(void) {

    /*
     * 'a' est une variable de type int
     * 'b' est une variable de type float
     * 'c' est une variable de type int* (pointeur vers un int)
     * 'd' est une variable de type int** (pointeur vers un pointeur de type int*)
     * 'e' est une variable de type float* (pointeur vers un float)
     *
     * 'c' pointe sur 'a' (adresse de 'a')
     * 'e' pointe sur 'b' (adresse de 'b')
     * 'd' pointe sur 'c' (adresse du pointeur 'c' qui pointe sur 'a')
     */

    int a = 3;
    float b = 3.5f;
    int *c = &a;
    int **d = &c;
    float *e = &b;

    printf("Valeur de a : %d\n", a);
    printf("Adresse de a : %p\n", &a);

    printf("\nValeur de b : %.2f\n", b);
    printf("Adresse de b : %p\n", &b);

    printf("\nValeur de c (adresse de a) : %p\n", c);
    printf("Adresse de c : %p\n", &c);
    printf("Valeur pointee par c : %d\n", *c);

    printf("\nValeur de d (adresse de c) : %p\n", d);
    printf("Valeur pointee par d (adresse de a) : %p\n", *d);
    printf("Valeur doublement pointee par d : %d\n", **d);

    printf("\nValeur de e (adresse de b) : %p\n", e);
    printf("Valeur pointee par e : %.2f\n", *e);

    return 0;
}