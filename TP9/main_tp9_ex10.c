#include <stdio.h>

int main(void) {

    /*
     * Les deux codes sont équivalents, dans les deux cas on modifie la valeur de 'age' en utilisant son adresse
     * Le premier code passe directement l'adresse de 'age'
     * Le deuxième code utilise un pointeur 'pAge' pour stocker l'adresse de 'age'
     *
     * Le premier code est plus simple et plus lisible, car il n'y a pas de besoin d'un pointeur supplémentaire
     * Le deuxième code peut être utile si on a besoin de manipuler plusieurs pointeurs dans le programme, mais il ajoute un peu de complexité
     */

    int age = 5;
    printf("Quel age avez-vous ?\n");
    scanf("%d", &age);

//    int age = 5;
//    int* pAge = &age;
//    printf("Quel age avez-vous ?\n");
//    scanf("%d", pAge);

    printf("\nAge : %d\n", age);

    return 0;
}