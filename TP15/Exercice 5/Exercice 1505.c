#include "Exercice 1505.h"
#include "../Exercice 3/Exercice 1503.h"

void cesarPhrase(char phrase[MAX]){
    int decalage = 0;
    char alphabet[MAX] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    printf("Entrez le decalage :\n");
    scanf("%d", &decalage);
    for (int i = 0; i < strlen(phrase); i++) {
        if (islower(phrase[i])) {
            phrase[i] = toupper(phrase[i]);
        }
    }
    for(int i = 0; i < strlen(phrase); i++){
        for(int j = 0; j < strlen(alphabet); j++){
            if(phrase[i] == alphabet[j] && phrase[i] != '\n'){
                if(j+decalage > 25){
                    phrase[i] = alphabet[j+decalage-26];
                    j = MAX;
                }
                else if(j+decalage < 0){
                    phrase[i] = alphabet[j+decalage+26];
                    j = MAX;
                }
                else{
                    phrase[i] = alphabet[j+decalage];
                    j = MAX;
                }
            }
        }
    }

}

void exercice1505(){
    fflush(stdin);
    char phrase[MAX] = {0};
    saisirPhrase(phrase);
    cesarPhrase(phrase);
    printf("Le message chiffre est : %s", phrase);
}