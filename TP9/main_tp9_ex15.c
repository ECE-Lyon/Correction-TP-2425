#include <stdio.h>

int main(void) {

    /*
     * &a       (correct)   : adresse de 'a' -> &a
     * *a       (incorrect) : 'a' n'est pas un pointeur, donc *a n'est pas valide.
     * &b       (correct)   : adresse de 'b' -> &b
     * *b       (correct)   : valeur de 'a'  -> *b = a
     * **b      (incorrect) : 'b' est déjà un pointeur vers 'a', donc **b n'est pas valide.
     * &*b      (correct)   : valeur de 'b'  -> &*b = b = &a
     * *&b      (correct)   : valeur de 'b'  -> *&b = b = &a
     * &*a      (incorrect) : 'a' n'est pas un pointeur, donc &*a n'est pas valide.
     * &*&a     (correct)   : adresse de 'a' -> &*&a = &a
     * &*&*&*b  (correct)   : valeur de 'b'  -> &*&*&*b = b = &a
     */

    int a = 5;
    int* b = &a;

    printf("\n&a : %p", &a);
    printf("\n&b : %p", &b);
    printf("\n*b : %d", *b);
    printf("\n&*b : %p", &*b);
    printf("\n*&b : %p", *&b);
    printf("\n&*&a : %p", &*&a);
    printf("\n&*&*&*b : %p\n", &*&*&*b);

    return 0;
}