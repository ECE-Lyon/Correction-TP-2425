#ifndef EXO1008_H
#define EXO1008_H

/**
 * @struct Un post
 * 
 * @param numbLike Le nombre de like
 * @param numbComment Le nombre de commentaires
 */
typedef struct {
    unsigned int numbLike;
    unsigned int numbComment;
} Post;

/**
 * @brief Calcule le taux d'engagement
 * 
 * @param post Le post
 * @param numbFollowers Le nombre de followers
 * 
 * @return double Le taux d'engagement
 */
double tauxEngagement(const Post post, const unsigned int numbFollowers);

/**
 * @brief Donne un avis sur la performance
 * 
 * @param tauxEngagement Le taux d'engagement
 */
void avisPerformance(const double tauxEngagement);

/**
 * @brief Fonction principale de l'exercice
 * 
 * @return void
 */
void exo1008(void);

#endif // EXO1008_H