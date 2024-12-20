#ifndef TP10_EXO1_H
#define TP10_EXO1_H

/**
 * @brief Demande un entier à l'utilisateur
 * 
 * @return l'entier saisie par l'utilisateur
 */
int getEntier(void);

/**
 * @brief Demande un entier à l'utilisateur
 * 
 * @param entierPtr pointeur vers l'entier à modifier
 * 
 * @return void
 * 
 * @note Cette fonction modifie l'entier pointé par entierPtr
 */
void saisirEntier(int* entierPtr);

/**
 * @brief Retourne le plus grand des deux entiers
 * 
 * @param a premier entier
 * @param b deuxième entier
 * 
 * @return le plus grand des deux entiers
 */
int getPlusGrand(int a, int b);

/**
 * @brief Affiche le plus grand des deux entiers
 * 
 * @param a premier entier
 * @param b deuxième entier
 * 
 * @return void
 */
void afficherPlusGrand(int a, int b);

/**
 * @brief Fonction principale de l'exercice
 * 
 * @return void
 */
void exo1001(void);

#endif //TP10_EXO1_H