#ifndef EXO1005_H
#define EXO1005_H


typedef enum {
    // Affiche le menu
    NONE,
    // Affiche un rectangle
    RECT,
    // Affiche un triangle
    TRIA,
    // Stop le programme
    QUIT,
} Selected;

/**
 * @struct Un rectangle
 * 
 * @param width La largeur du rectangle
 * @param height La hauteur du rectangle
 */
typedef struct {
    double width;
    double height;
} Rectangle;

/**
 * @struct Un triangle équilatéral
 * 
 * @param size La taille du triangle
 */
typedef struct {
    double size;
} TriangleEquilateral;


/**
 * @brief Crée un rectangle
 * 
 * @return Le rectangle
 */
Rectangle createRectangle();

/**
 * @brief Crée un triangle équilatéral
 * 
 * @return Le triangle équilatéral
 */
TriangleEquilateral createTriangleEquilateral();


/**
 * @brief Calcule la surface d'un rectangle
 * 
 * @param rectangle Le rectangle
 * 
 * @return La surface du rectangle
 */
double getSurfaceRectangle(const Rectangle rectangle);

/**
 * @brief Calcule la surface d'un triangle équilatéral
 * 
 * @param triangle Le triangle équilatéral
 * 
 * @return La surface du triangle équilatéral
 */
double getSurfaceTriangleEquilateral(const TriangleEquilateral triangle);

/**
 * @brief Dessine un rectangle
 * 
 * @param rectangle Le rectangle
 */
void drawRectangle(const Rectangle rectangle);

/**
 * @brief Dessine un triangle équilatéral
 * 
 * @param triangle Le triangle équilatéral
 */
void drawTriangleEquilateral(const TriangleEquilateral triangle);

/**
 * @brief Fonction principale de l'exercice
 * 
 * @return void
 */
void exo1005();



#endif // EXO1005_H