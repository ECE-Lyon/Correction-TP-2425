#include <stdio.h>

int main(void) {

    int n = 3;
    int *p = &n;        // La valeur de 'p' correspond à l'adresse de 'n'
    int **pp = &p;      // La valeur de 'pp' correspond à l'adresse de 'p'
    int ***ppp = &pp;   // La valeur de 'ppp' correspond à l'adresse de 'pp'

    printf("\nValeur de n : %d\n", n);
    printf("Adresse de n : %p\n", &n);

    printf("\nValeur de p : %p\n", p);
    printf("Adresse de p : %p\n", &p);

    printf("\nValeur de pp : %p\n", pp);
    printf("Adresse de pp : %p\n", &pp);

    printf("\nValeur de ppp : %p\n", ppp);
    printf("Adresse de ppp : %p\n", &ppp);

    return 0;
}