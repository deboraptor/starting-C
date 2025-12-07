// source: https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/7669936-faites-des-calculs-avec-des-variables
/*
    Imaginez un programme qui demande deux nombres à l'utilisateur :

    Stockez ces deux nombres dans des variables.

    Faites la somme de ces variables.

    Stockez le résultat dans une variable appelée resultat.

    Vous n'avez plus qu'à afficher le résultat du calcul à l'écran, sous les yeux ébahis de 
    l'utilisateur qui n'aurait jamais été capable de calculer cela de tête aussi vite.
*/

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;

    printf("Entrez un premier chiffre : "); 
    scanf("%d", &a);
    printf("Entrez un deuxième chiffre : ");
    scanf("%d", &b);
    
    int resultat = a + b;
    printf("%d + %d = %d -> le résultat est %d !! \n", a, b, resultat, resultat);
}