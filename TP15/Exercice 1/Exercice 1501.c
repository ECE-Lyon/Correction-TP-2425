#include "Exercice 1501.h"

int longueurChaine(char chaineDeCaracteres[MAX]){
    return strlen(chaineDeCaracteres);
}

void saisirPhrase(char phrase[MAX]){
    printf("Entrez une phrase : \n");
    fgets(phrase, MAX, stdin);
}

void exercice1501(){
    int i = 0;
    fflush(stdin);
    char phrase[MAX] = {0};
    saisirPhrase(phrase);
    i = longueurChaine(phrase);
    printf("Votre phrase contient %d caracteres", i-1);
}