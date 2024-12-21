#include <stdio.h>

int main(void) {

    int n = 3;
    int* p1 = &n;       // 'p1' pointe sur 'n' (adresse de 'n')
    int* p2 = p1;       // 'p2' vaut 'p1' donc 'p2' pointe sur 'n' également (adresse de 'n')
    int** p3 = &p1;     // 'p3' pointe sur 'p1' (adresse du pointeur 'p1' qui pointe sur 'n')
    int*** p4 = &p3;    // 'p4' pointe sur 'p3' (adresse du pointeur 'p3' qui pointe sur 'p1' qui pointe sur 'n')
    int**** p5 = &p4;   // 'p5' pointe sur 'p4' (adresse du pointeur 'p4' qui pointe sur 'p3' qui pointe sur 'p1' qui pointe sur 'n')

    printf("\n%d", n);            // Affiche directement la valeur de 'n'
    printf("\n%d", *p1);          // Affiche la valeur pointée par 'p1'
    printf("\n%d", *p2);          // Affiche la valeur pointée par 'p2', car 'p2' est égal à 'p1'
    printf("\n%d", **p3);         // Affiche la valeur doublement pointée par 'p3'
    printf("\n%d", ***p4);        // Affiche la valeur triplement pointée par 'p4'
    printf("\n%d", ****p5);       // Affiche la valeur quadruplement pointée par 'p5'
    printf("\n%d", **&p1);        // Affiche la valeur pointée par 'p1' en utilisant son adresse
    printf("\n%d", **&p2);        // Affiche la valeur pointée par 'p2' en utilisant son adresse
    printf("\n%d", ***&p3);       // Affiche la valeur doublement pointée par 'p3' en utilisant son adresse
    printf("\n%d", ****&p4);      // Affiche la valeur triplement pointée par 'p4' en utilisant son adresse
    printf("\n%d", *****&p5);     // Affiche la valeur quadruplement pointée par 'p5' en utilisant son adresse
    printf("\n%d", p1[0]);        // Affiche la valeur à laquelle 'p1' pointe (équivalent à *p1)
    printf("\n%d\n", **p4[0]);    // Affiche la valeur doublement pointée par le premier élément de 'p4' (équivalent à ***p4)

    return 0;
}