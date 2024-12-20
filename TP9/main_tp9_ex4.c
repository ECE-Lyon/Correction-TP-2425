int main(void) {

    /*
     * En exécutant ce code en mode débugueur, on constate que l'adresse de la variable 'n' n'est pas la même que celle de l'exercice précédent
     *
     * Par exemple j'obtiens 0x0061ff18 comme adresse pour la variable 'n' et 0x0061ff1c pour la variable 'pN'
     * De plus, on remarque que la valeur de 'pN' est 0x0061ff18 (ce qui correspond bien à l'adresse de 'n')
     *
     * On peut donc dire que le pointeur 'pN' pointe sur la variable 'n'
     */

    int n = 40;
    int *pN = &n;

    return 0;
}