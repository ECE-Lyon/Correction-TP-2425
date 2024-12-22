#include <stdio.h>

int main(void) {

    /*
     * a -> type : int   | valeur : 3
     * b -> type : int*  | valeur : adresse de 'a'
     * c -> type : int   | valeur : pas définie
     * d -> type : int   | valeur : 5
     * e -> type : int*  | valeur : adresse de 'c'
     * f -> type : int** | valeur : adresse de 'b'
     * g -> type : int*  | valeur : NULL
     */

    int a = 3, *b = &a, c, d = 5, *e = &c, **f = &b, *g = NULL;

    printf("\na -> type : int     | valeur : %d", a);
    printf("\nb -> type : int*    | valeur : %p", b);
    printf("\nc -> type : int     | valeur : non definie");
    printf("\nd -> type : int     | valeur : %d", d);
    printf("\ne -> type : int*    | valeur : %p", e);
    printf("\nf -> type : int**   | valeur : %p", f);
    printf("\ng -> type : int*    | valeur : %p\n", g);

    return 0;
}