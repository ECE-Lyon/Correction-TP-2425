#include <stdio.h>

int main(void) {

    /*
     * n vaut 10 (valeur de la variable 'n')
     * *n produit une erreur car 'n' n'est pas un pointeur
     * &n vaut 0x16daef618 (adresse de 'n')
     * pN vaut 0x16daef618 (adresse de 'n' stockée dans 'pN')
     * *pN vaut 10 (valeur pointée par 'pN', qui est 'n')
     * &pN vaut 0x16daef614 (adresse de 'pN')
     *
     * *&n vaut 10 (valeur de 'n' obtenue via son adresse)
     * &*&n vaut 0x16daef618 (adresse de 'n' obtenue après avoir accédé à sa valeur via son adresse)
     * *&*&n vaut 10 (valeur de 'n' en utilisant son adresse obtenue après avoir accédé à sa valeur via son adresse)
     * &*pN vaut 0x16daef618 (adresse de 'n' obtenue via 'pN')
     * *&pN vaut 0x16daef618 (valeur contenue dans 'pN', soit l'adresse de 'n')
     * &*&pN vaut 0x16daef614 (adresse de 'pN' obtenue après avoir accédé à sa valeur)
     */

    int n = 10;
    int *pN = &n;
    printf("%p\n%p\n", &n, &pN);

    return 0;
}