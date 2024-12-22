#include "Exercice 1504.h"

void inverserPhrase(char phrase[MAX]){
    char phraseInverser[MAX] = {0};
    int compteur = 0;
    for(int i = strlen(phrase); i > 0; i--){
        phraseInverser[compteur] = phrase[i-1];
        compteur++;
    }
    strcpy(phrase, phraseInverser);
}

void exercice1504(){
    fflush(stdin);
    char phrase[MAX] = {0};
    saisirPhrase(phrase);
    inverserPhrase(phrase);
    printf("La nouvelle phrase est : %s", phrase);
}
