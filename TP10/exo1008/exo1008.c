#include "exo1008.h"

#include <stdio.h>

double tauxEngagement(const Post post, const unsigned int numbFollowers) {
    // Division par zéro
    if (numbFollowers == 0) {
        return 0;
    }

    // Pour éviter taux > 100%
    if (post.numbLike + post.numbComment > numbFollowers) {
        return 100;
    }


    return 100 * (double) (post.numbLike + post.numbComment) / numbFollowers;
}

void avisPerformance(const double tauxEngagement) {
    if (tauxEngagement < 1) {
        printf("Taux d'engagement faible\n");
    } else if (tauxEngagement < 10) {
        printf("Taux d'engagement moyen\n");
    } else {
        printf("Taux d'engagement eleve\n");
    }
}

void exo1008(void) {
    Post post = {0, 0};
    int numbFollowers = 0;

    printf("Nombre de like: ");
    scanf("%d", &post.numbLike);

    printf("Nombre de commentaires: ");
    scanf("%d", &post.numbComment);

    printf("Nombre de followers: ");
    scanf("%d", &numbFollowers);

    double engagement = tauxEngagement(post, numbFollowers);

    printf("Taux d'engagement: %.2f%%\n", engagement);
    avisPerformance(tauxEngagement(post, numbFollowers));

}