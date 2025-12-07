// https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/7672176-creez-et-initialisez-des-pointeurs

#include <stdio.h>

int main(int argc, char *argv[])
{
    int variable = 5;
    printf("variable = %d\n", variable);
    printf("adresse variable = %p\n", &variable);

    //int *monPointeur = NULL; // ou int* monPointeur
    int *pointeur;
    pointeur = &variable;

    printf("valeur du pointeur = %p\n", pointeur);
    printf("valeur contenue dans le pointeur %d\n", *pointeur);

    return 0;
}