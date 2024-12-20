#ifndef EXO1007_H
#define EXO1007_H

// Constantes

// Découvert autorisé (100 d'après la consigne)
#define DECOUVERT_AUTORISE 100

// Code PIN
#define PIN 1234


typedef enum {
    // Valeur par défaut
    AUTRE,
    // Affiche le solde
    SOLDE,
    // Depose de l'argent
    DEPOS,
    // Retire de l'argent
    RETIR,
    // Quitter
    FINIR,
} Selected;

/**
 * @brief Affiche le solde du compte
 * 
 * @param solde Solde du compte
 * @return void
 */
void afficherSolde(int solde);

/**
 * @brief Depose de l'argent sur le compte
 * 
 * @param solde Solde du compte
 * @param montant Montant a deposer
 * @return void
 */
void deposerArgent(int *solde, const unsigned int montant);

/**
 * @brief Retire de l'argent du compte
 * 
 * @param solde Solde du compte
 * @param montant Montant a retirer
 * @return 0 si retrait effectué, -1 sinon
 */
int retirerArgent(int *solde, const unsigned int montant);

/**
 * @brief Affiche le menu
 * 
 * @param solde Solde du compte
 * @return void
 */
void afficherMenu(int *solde);

/**
 * @brief Verifie le code PIN
 * 
 * @param pin Code entré par l'utilisateur
 * @return 1 si juste, 0 sinon
 * 
 * @note Le code PIN est défini par la constante PIN
 */
int verifierPin(int pin);

/**
 * @brief Fonction principale de l'exercice
 * 
 * @return void
 */
void exo1007();

#endif // EXO1007_H