#include <stdio.h>

int main(void) {

    int entier = 3;             // Initialisation d'un entier
    int *pEntier = &entier;     // Adresse d'un entier

    float flottant = 2.78f;         // Initialisation d'un flottant
    float *pFlottant = &flottant;   // Adresse d'un flottant

    char caractere = 'T';               // Initialisation d'un caractère
    char *pCaractere = &caractere;      // Adresse d'un caractère
    char **ppCaractere = &pCaractere;   // Adresse d'adresse d'un caractère

    double nbDouble = 3.14;                 // Initialisation d'un double
    double *pNbDouble = &nbDouble;          // Adresse d'un double
    double **ppNbDouble = &pNbDouble;       // Adresse de l'adresse d'un double
    double ***pppNbDouble = &ppNbDouble;    // Adresse de l'adresse de l'adresse d'un double

    printf("\nValeur de entier : %d\n", entier);
    printf("int* : adresse de entier (%p)\n", pEntier);

    printf("\nValeur de flottant : %.2f\n", flottant);
    printf("float* : adresse de flottant (%p)\n", pFlottant);

    printf("\nValeur de caractere : %c\n", caractere);
    printf("char* : adresse de caractere (%p)\n", pCaractere);
    printf("char** : adresse de l'adresse de caractere (%p)\n", ppCaractere);

    printf("\nValeur de nbDouble : %.2lf\n", nbDouble);
    printf("double* : adresse de nbDouble (%p)\n", pNbDouble);
    printf("double** : adresse de l'adresse de nbDouble (%p)\n", ppNbDouble);
    printf("double*** : adresse de l'adresse de l'adresse de nbDouble (%p)\n", pppNbDouble);

    return 0;
}