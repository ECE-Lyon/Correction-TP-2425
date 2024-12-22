#include "Exercice 1/Exercice 1501.h"
#include "Exercice 2/Exercice 1502.h"
#include "Exercice 3/Exercice 1503.h"
#include "Exercice 4/Exercice 1504.h"
#include "Exercice 5/Exercice 1505.h"


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
                exercice1502();
                break;
            case 3:
                exercice1503();
                break;
            case 4:
                exercice1504();
                break;
            case 5:
                exercice1505();
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