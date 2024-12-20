#include "Exercice 1501.h"

int main(void) {
    int a = 0;
    do {
        printf("\n\n------------------------------------------------------------------\n"
               "Entrez n pour lancer l'exercice n (Exemple : 1 pour l'exercice 1)\n"
               "Entrez 0 pour quitter\n"
               "Quel exercice voulez-vous executer ?\n");
        scanf("%d", &a);
        switch (a) {
            case 1:
                exercice1501();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 0:
                break;
            default:
                printf("Le numero saisi ne correspond pas a un exercice. Reessayer");
                break;
        }
    } while(a);

    return 0;
}