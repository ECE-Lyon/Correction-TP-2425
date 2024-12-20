#include <stdio.h>

int main(void) {

    /*
     * 'd' est une variable de type char
     * 'b' est une variable de type char* (pointeur vers un char)
     * 'c' est une variable de type char** (pointeur vers un pointeur de type char*)
     * 'a' est une variable de type char*** (pointeur vers un pointeur de type char**)
     * 'e' est une variable de type float
     * 'f' est une variable de type float* (pointeur vers un float)
     *
     * 'b' pointe sur 'd' (adresse de 'd')
     * 'c' pointe sur 'b' (adresse du pointeur 'b' qui pointe sur 'd')
     * 'a' pointe sur 'c' (adresse du pointeur 'c' qui pointe sur 'b' qui pointe sur 'd')
     * 'f' pointe sur 'e' (adresse de 'e')
     */

    char d = 'Z';
    char *b = &d;
    char **c = &b;
    char ***a = &c;
    float e = 9.8f;
    float *f = &e;

    printf("Valeur de d : %c\n", d);
    printf("Adresse de d : %p\n", &d);

    printf("\nValeur de b (adresse de d) : %p\n", b);
    printf("Adresse de b : %p\n", &b);
    printf("Valeur pointee par b : %c\n", *b);

    printf("\nValeur de c (adresse de b) : %p\n", c);
    printf("Valeur pointee par c (adresse de d) : %p\n", *c);
    printf("Valeur doublement pointee par c : %c\n", **c);

    printf("\nValeur de a (adresse de c) : %p\n", a);
    printf("Valeur pointee par a (adresse de b) : %p\n", *a);
    printf("Valeur triplement pointee par a : %c\n", ***a);

    printf("\nValeur de e : %.2f\n", e);
    printf("Adresse de e : %p\n", &e);

    printf("\nValeur de f (adresse de e) : %p\n", f);
    printf("Valeur pointee par f : %.2f\n", *f);

    return 0;
}