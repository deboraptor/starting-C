// https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/7672506-creez-des-variables-de-type-tableaux

#include <stdio.h>

int main()
{
    int tableau[4];

    tableau[0] = 10;
    tableau[1] = 23;
    tableau[2] = 505;
    tableau[3] = 8;

    int a[3] = {1, 2, 3};  // deuxième manière

    printf("pointeur de tableau = %d\n", tableau);
    printf("première valeur de tableau = %d\n", *tableau); // ça marche vu que c'est un pointeur (pour la première valeur)

    /*
    tableau[1] // Renvoie la valeur de la seconde case (la première case étant 0)
    *(tableau + 1) // Identique : renvoie la valeur contenue dans la seconde case   
    */

    printf("case 3 de tableau = %d\n", tableau[2]);
    printf("case 2 de a = %d\n", a[1]);
}