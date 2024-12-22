#include <stdio.h>

int main(void) {

    /*
     * On remarque que les trois affectations aboutissent au même résultat, mais par des moyens différents.
     */

    int a = 10;             // 'a' est un entier initialisé à 10.
    int *b = &a, *c = NULL; // 'b' pointe sur 'a' et 'c' est initialisé à NULL.
    int **d = &b;           // 'd' est un double pointeur qui pointe sur 'b'.

    c = b; // Affectation de 'b' (adresse de 'a') à 'c'
    printf("\nValeur pointee par c (via b) : %d", *c);
    c = NULL;

    c = &a; // Affectation de l'adresse de 'a' à 'c'
    printf("\nValeur pointee par c (via &a) : %d", *c);
    c = NULL;

    c = *d; // Affectation de la valeur pointée par 'd' ('b' soit l'adresse de 'a') à 'c'
    printf("\nValeur pointee par c (via *d) : %d\n", *c);

    return 0;
}