// https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/7672506-creez-des-variables-de-type-tableaux

#include <stdio.h>

int main()
{
    int tableau[4];
    int i = 0;

    //int tableau[4], i = 0; // = même chose que les deux lignes en haut !!
    
    //int tableau[4] = {10, 23}; // Valeurs insérées : 10, 23, 0, 0
    //int tableau[4] = {0}; // Toutes les cases du tableau seront initialisées à 0

    //int tableau[] = {12, 19, 18, 2}; // Déduis automatiquement la taille en fonction du nombres de valeurs entre les crochets

    tableau[0] = 10;
    tableau[1] = 23;
    tableau[2] = 505;
    tableau[3] = 8;

    for (i = 0 ; i < 4 ; i++)
    {
        printf("%d\n", tableau[i]);
    }

    //int a[3] = {1, 2, 3};  // deuxième manière

    //printf("pointeur de tableau = %d\n", tableau);
    //printf("première valeur de tableau = %d\n", *tableau); // ça marche vu que c'est un pointeur (pour la première valeur)

    /*
    tableau[1] // Renvoie la valeur de la seconde case (la première case étant 0)
    *(tableau + 1) // Identique : renvoie la valeur contenue dans la seconde case   
    */

    //printf("case 3 de tableau = %d\n", tableau[2]);
    //printf("case 2 de a = %d\n", a[1]);

    return 0;
}