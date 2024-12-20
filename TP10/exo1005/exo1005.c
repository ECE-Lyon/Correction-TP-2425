#include "exo1005.h"

#include <stdio.h>
#include <math.h>

Rectangle createRectangle() {
    double width, height;
    printf("Largeur du rectangle : ");
    scanf("%lf", &width);
    printf("Hauteur du rectangle : ");
    scanf("%lf", &height);
    
    return (Rectangle) {
        .height = height,
        .width  = width,
    };
}

TriangleEquilateral createTriangleEquilateral() {
    double size;
    printf("Cote du triangle equilateral : ");
    scanf("%lf", &size);
    
    return (TriangleEquilateral) {
        .size = size,
    };
}

double getSurfaceRectangle(const Rectangle rectangle) {
    return rectangle.width * rectangle.height;
}

double getSurfaceTriangleEquilateral(const TriangleEquilateral triangle) {
    return (sqrt(3) / 4) * triangle.size * triangle.size;
}

void drawRectangle(const Rectangle rectangle) {
    printf("Rectangle hauteur = %.2f, largeur = %.2f\n", rectangle.height, rectangle.width);
    for (int i = 0; i < rectangle.height; i++) {
        for (int j = 0; j < rectangle.width; j++) {
            printf("o ");
        }
        printf("\n");
    }
    printf("\n");
}

void drawTriangleEquilateral(const TriangleEquilateral triangle) {
    printf("Triangle cote = %.2f\n", triangle.size);
    for (int i = 0; i < triangle.size; i++) {
        for (int j = 0; j < triangle.size - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++) {
            printf("o ");
        }
        printf("\n");
    }
    printf("\n");
}

void exo1005() {
    int selected = NONE;
    do {
        printf("#-----------------------#\n");
        printf("1 - Rectangle\n");
        printf("2 - Triangle equilateral\n");
        printf("3 - Quitter\n");
        printf("#-----------------------#\n");
        scanf("%d", &selected);
        
        switch (selected) {
            case RECT: {
                Rectangle rectangle = createRectangle();
                printf("Surface du rectangle : %.2f\n", getSurfaceRectangle(rectangle));
                drawRectangle(rectangle);
            }
            break;
            case TRIA: {
                TriangleEquilateral triangle = createTriangleEquilateral();
                printf("Surface du triangle equilateral : %.2f\n", getSurfaceTriangleEquilateral(triangle));
                drawTriangleEquilateral(triangle);
            }
            break;
            case QUIT:
                printf("Au revoir\n");
            break;
        }
    } while (selected != QUIT);
}
