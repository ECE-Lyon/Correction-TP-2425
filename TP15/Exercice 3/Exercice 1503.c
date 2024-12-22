#include "Exercice 1503.h"

void transformeMAJ(char phrase[MAX]){
    int choix = 0;
    printf("Voulez-vous transformer la phrase en minuscule (0) en majuscule (1) ?\n");
    scanf("%d", &choix);
    if(choix) {
        for (int i = 0; i < strlen(phrase); i++) {
            if (islower(phrase[i])) {
                phrase[i] = toupper(phrase[i]);
            }
        }
    }
    else{
        for (int i = 0; i < strlen(phrase); i++) {
            if (isupper(phrase[i])) {
                phrase[i] = tolower(phrase[i]);
            }
        }
    }
}

void exercice1503(){
    fflush(stdin);
    char phrase[MAX] = {0};
    saisirPhrase(phrase);
    transformeMAJ(phrase);
    printf("La nouvelle phrase est : %s", phrase);
}