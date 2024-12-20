#include <stdio.h>

int main(void) {

    int entier1 = 3;            // Initialisation d'un entier
    int *pEntier1 = &entier1;   // Adresse d'un entier

    char caractere = 'T';               // Initialisation d'un caractère
    char *pCaractere = &caractere;      // Adresse d'un caractère

    long int entierLong = 123456789;        // Initialisation d'un entier long
    long int *pEntierLong = &entierLong;    // Adresse d'un entier long

    float flottant = 2.78f;             // Initialisation d'un flottant
    float *pFlottant = &flottant;       // Adresse d'un flottant
    float **ppFlottant = &pFlottant;    // Adresse de l'adresse d'un flottant

    double nbDouble = 7.89;                 // Initialisation d'un double
    double *pNbDouble = &nbDouble;          // Adresse d'un double
    double **ppNbDouble = &pNbDouble;       // Adresse de l'adresse d'un double
    double ***pppNbDouble = &ppNbDouble;    // Adresse de l'adresse de l'adresse d'un double

    int entier2 = 7;                    // Initialisation d'un entier
    int *pEntier2 = &entier2;           // Adresse d'un entier
    int **ppEntier2 = &pEntier2;        // Adresse de l'adresse d'un entier
    int ***pppEntier2 = &ppEntier2;     // Adresse de l'adresse de l'adresse d'un entier
    int ****ppppEntier2 = &pppEntier2;  // Adresse de l'adresse de l'adresse de l'adresse d'un entier

    printf("\nValeur de entier1 : %d\n", entier1);
    printf("int* : adresse de entier1 (%p)\n", pEntier1); // Un int doit être pointé par un pointeur de type int*

    printf("\nValeur de caractere : %c\n", caractere);
    printf("char* : adresse de caractere (%p)\n", pCaractere); // Un char doit être pointé par un pointeur de type char*

    printf("\nValeur de entierLong : %ld\n", entierLong);
    printf("long int* : adresse de entierLong (%p)\n", pEntierLong); // Un long int doit être pointé par un pointeur de type long int*

    printf("\nValeur de flottant : %.2f\n", flottant);
    printf("float* : adresse de flottant (%p)\n", pFlottant);
    printf("float** : adresse de l'adresse de flottant (%p)\n", ppFlottant); // Un float* doit être pointé par un pointeur de type float**

    printf("\nValeur de nbDouble : %.2lf\n", nbDouble);
    printf("double* : adresse de nbDouble (%p)\n", pNbDouble);
    printf("double** : adresse de l'adresse de nbDouble (%p)\n", ppNbDouble);
    printf("double*** : adresse de l'adresse de l'adresse de nbDouble (%p)\n", pppNbDouble); // Un double** doit être pointé par un pointeur de type double***

    printf("\nValeur de entier2 : %d\n", entier2);
    printf("int* : adresse de entier2 (%p)\n", pEntier2);
    printf("int** : adresse de l'adresse de entier2 (%p)\n", ppEntier2);
    printf("int*** : adresse de l'adresse de l'adresse de entier2 (%p)\n", pppEntier2);
    printf("int**** : adresse de l'adresse de l'adresse de l'adresse de entier2 (%p)\n", ppppEntier2); // Un int*** doit être pointé par un pointeur de type int****

    return 0;
}