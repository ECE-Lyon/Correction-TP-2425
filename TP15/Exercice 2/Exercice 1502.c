#include "../Exercice 1/Exercice 1501.h"

int chercherUnCaractere(char phrase[MAX], char caractere){
    int numCaractere = 0;
    for(int i = 0; i < strlen(phrase); i++){
    if(phrase[i] == caractere) {numCaractere++;}
    }
    return numCaractere;
}

void exercice1502(){
    fflush(stdin);
    char phrase[MAX] = {0}, caractere = 0;
    int numCaractere = 0;
    saisirPhrase(phrase);
    printf("Entrez un caractere a chercher :\n");
    scanf("%c", &caractere);
    numCaractere = chercherUnCaractere(phrase, caractere);
    printf("Il y a %d fois le caractere %c dans : %s", numCaractere, caractere, phrase);
}

