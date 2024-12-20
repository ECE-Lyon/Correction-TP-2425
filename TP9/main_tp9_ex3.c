#include <stdio.h>

int main(void) {

    /*
     * Dans le cas de cet exercice &n représente l'adresse de la variable 'n' et &pN l'adresse du pointeur 'pN' :
     * - &n vaut 0x5b32aa8f (adresse de 'n')
     * - &pN vaut 0x6072bf84 (adresse de 'pN')
     *
     * Cependant ces valeurs ne valent pas toujours la même chose
     * En exécutant le code ci-dessous, on verra que les valeurs de &n et &pN peuvent être différentes
     */

    int n = 40;
    int *pN = &n;

    printf("\nValeur de &n (adresse de 'n') : %p", &n);
    printf("\nValeur de &pN (adresse de 'pN') : %p\n", &pN);

    return 0;
}