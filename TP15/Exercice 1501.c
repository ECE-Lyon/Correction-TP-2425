#include "Exercice 1501.h"

void longueurChaine(char chaineDeCaracteres[MAX]){
    int i = strlen(chaineDeCaracteres);
    printf("Votre phrase contient %d caracteres", i-1);
}

void saisirPhrase(char phrase[MAX]){
    printf("Entrez une phrase : \n");
    fgets(phrase, MAX, stdin);

}

void exercice1501(){
    fflush(stdin);
    char phrase[MAX];
    saisirPhrase(phrase);
    longueurChaine(phrase);
}