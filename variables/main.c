// Source : OpenClassrooms - Apprenez à programmer en C
// https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/7669586-declarez-des-variables

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombreDeVies = 5; // Au départ, le joueur a 5 vies
    int niveau = 0;

    if (niveau < 10)
    { 
        printf("Vous avez %d vies et vous êtes au niveau %d\n", nombreDeVies, niveau);
        printf("**** B A M ****\n"); // Là il se prend un grand coup sur la tête
        nombreDeVies -= 1; // Il vient de perdre une vie !
        niveau += 1; 
        printf("Bravo ! Vous avez atteint le niveau %d\n", niveau);
    }
    else ()
    {
        printf("Ah désolé, il ne vous reste plus que %d vies maintenant !\n\n", nombreDeVies);
    }

    return 0;
}