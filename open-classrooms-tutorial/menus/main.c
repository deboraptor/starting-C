/*

En console, pour faire un menu, on fait des printf qui affichent les différentes options possibles. 
Chaque option est numérotée, et l'utilisateur doit entrer le numéro du menu qui l'intéresse.

Voici par exemple ce que la console devra afficher :

=== Menu ===
1. Royal Cheese
2. Mc Deluxe
3. Mc Bacon
4. Big Mac
Votre choix ?

Votre mission (si vous l'acceptez) :

    Reproduire ce menu à l'aide de printf.

    Ajouter un scanf pour enregistrer le choix de l'utilisateur dans une variable choixMenu.

    Faire un switch pour dire à l'utilisateur "tu as choisi le menu Royal Cheese", par exemple.

*/

#include <stdio.h>

int main()
{
    int choixMenu = 0;

    printf("=== Menu ===\n");
    printf("1. Royal Cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Bacon\n");
    printf("4. Big Mac\n");
    printf("Votre choix ? \n");
    scanf("%d", &choixMenu);

    switch (choixMenu)
    {
        case 1:
            printf("hhhh royal cheese ? Régale toi bg\n");
            break;
        case 2:
            printf("hhhmm mc deluxe ? Régale toi bg\n");
            break;
        case 3:
            printf("hhhmmm mc bacon ? Régale toi bg\n");
            break;
        case 4:
            printf("hhmm bic mac ? Régale toi bg\n");
            break;
        default:
            printf("frr te fou pas de moi\n");
            break;
    }

    return 0;
}