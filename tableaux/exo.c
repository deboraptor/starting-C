/*
https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/7672506-creez-des-variables-de-type-tableaux

Consigne
D'abord, créez une fonction sommeTableau qui renvoie la somme des valeurs contenues dans 
le tableau (utilisez un return pour renvoyer la valeur). Pour vous aider, voici le prototype 
de la fonction à créer :

int sommeTableau(int tableau[], int tailleTableau);

Ensuite, créez une fonction moyenne Tableau qui calcule et renvoie la moyenne des valeurs. 
Voici le prototype :

double moyenneTableau(int tableau[], int tailleTableau);
*/

#include <stdio.h>

int sommeTableau(int tableau[], int tailleTableau);
//double moyenneTableau(int tableau[], int tailleTableau);

int main()
{   
    int tableau[4] = {0, 5, 6, 2};
    int tailleTableau = 4;

    int res = sommeTableau(tableau, tailleTableau);
    printf("Somme du tableau = %d\n", res);

    //int moy = moyenneTableau(tableau, tailleTableau);
    //printf("moyenne = %d\n", moy);

    return 0;
}

int sommeTableau(int tableau[], int tailleTableau)
{
    int i;
    int somme = 0;
 
    for (i = 0 ; i < tailleTableau ; i++)
    {   
        somme += tableau[i];
        //printf("%d\n", tableau[i]);
    }
    //printf("somme = %d\n", somme);

    return somme;
}

//double moyenneTableau(int tableau[], int tailleTableau)
