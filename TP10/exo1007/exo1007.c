#include "exo1007.h"

#include <stdio.h>


void afficherSolde(int solde) {
    printf("Votre solde est de %d euros\n", solde);
}

void deposerArgent(int *solde, const unsigned int montant) {
    *solde += montant;
    printf("Vous avez depose %d euros\n", montant);
}

int retirerArgent(int *solde, const unsigned int montant) {
    if (*solde >= montant - DECOUVERT_AUTORISE) {
        *solde -= montant;
        return 0;
    }
    return -1;
}

void afficherMenu(int* solde) {
    Selected choix = AUTRE;

    do {
        printf("\n");
        printf("#-----------------------#\n");
        printf("Menu :\n");
        printf("1 - Afficher le solde\n");
        printf("2 - Deposer de l'argent\n");
        printf("3 - Retirer de l'argent\n");
        printf("4 - Quitter\n");
        printf("#-----------------------#\n");
        scanf("%d", &choix);

        switch (choix) {
            case SOLDE:
                afficherSolde(*solde);
            break;
            case DEPOS:
                printf("Montant a deposer : ");
                int montant;
                scanf("%d", &montant);
                
                if (montant < 0) {
                    printf("Montant invalide\n");
                    break;
                }

                deposerArgent(solde, (unsigned int) montant);
                afficherSolde(*solde);
            break;
            case RETIR:
                printf("Montant a retirer : ");
                int montantRetrait;
                scanf("%d", &montantRetrait);

                if (montantRetrait < 0) {
                    printf("Montant invalide\n");
                    break;
                }

                if (retirerArgent(solde, (unsigned int) montantRetrait) == -1) {
                    printf("Solde insuffisant\n");
                } else {
                    printf("Vous avez retire %d euros\n", montantRetrait);

                }
                afficherSolde(*solde);
            break;
            case FINIR:
                printf("Au revoir\n");
            break;
        }
    } while (choix != FINIR);
}


int verifierPin(int pin) {
    return pin == PIN;
}


void exo1007() {
    int solde = 100;
    int pin = 0;

    int nbTentatives = 0;
    
    do {
        printf("Entrez votre code pin : ");
        scanf("%d", &pin);
        nbTentatives++;

        if (verifierPin(pin)) {
            printf("Code pin correct\n");
            break;
        } else {
            printf("Code pin incorrect\n");
        }
    } while (nbTentatives < 3);

    if (nbTentatives < 3) {
        afficherMenu(&solde);
    } else {
        printf("Carte bloquee\n");
    }

}