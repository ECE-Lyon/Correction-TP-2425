#include "exo1001.h"
#include <stdio.h>

int getEntier(void){
    int entier;
    printf("Entrez un entier : ");
    scanf("%d", &entier);
    return entier;
}

void saisirEntier(int* entierPtr){
    printf("Entrez un entier : ");
    scanf("%d", entierPtr);
}

int getPlusGrand(int a, int b){

    /* Version sans ternaire
    
    if (a > b) {
        return a;
    }
    return b;

    */

    return a > b ? a : b;
}

void afficherPlusGrand(int a, int b){
    printf("Le plus grand des deux entiers est : %d\n", getPlusGrand(a, b));
}

void exo1001(void){
    int a = getEntier();
    int b;
    saisirEntier(&b);
    afficherPlusGrand(a, b);
}