/* (Généré par Chat GPT)
# Exo : “Mini gestionnaire de liste de tâches (Todo)”

## Objectif
Le programme affiche un menu en boucle et permet de :
* Ajouter une tâche (texte)
* Afficher toutes les tâches
* Marquer une tâche comme faite
* Supprimer une tâche
* Quitter

## Contraintes (niveau débutant friendly)
* Max 20 tâches
* Chaque tâche : max 60 caractères

Une tâche a :
* un texte
* un statut [ ] (pas faite) ou [x] (faite)
*/

#include <stdio.h>
#include <string.h>

/*
Affichage menu avec choix
variables : array tache[max20](texte[max60]), statut(texte[3c])
*/
int main(void)
{
      char tache[21][61];
      int finie[21];
      int choix;      
      int nombreTache = 0;

      do
      {
            printf("1. Ajouter une tâche\n");
            printf("2. Afficher toutes les tâches\n");
            printf("3. Marquer une tâche comme faite\n");
            printf("4. Supprimer une tâche\n");
            printf("5. Quitter\n");

            scanf("%1d", &choix);

            switch (choix)
      {
      case 1:
            finie[nombreTache] = 0;
            printf("Quelle tâche veux-tu ajouter?\n");
            // copier une string ? strcpy
            scanf("%s", &tache[nombreTache]); // les strings ignorents les espaces donc à changer
            nombreTache++;
            break;
      case 2:
            printf("Voici les tâches en cours:\n");
            // TODO : afficher statut finie[i]
            for (int i = 0; i < nombreTache; i++)
            {
                  printf("%s - ", tache[i]);
                  printf("%d\n", finie[i]);
            }
            break;
      case 3:
            printf("Quelle tâche as-tu fini?\n");
            break;
      case 4:
            printf("Quelle tâche veux-tu supprimer?\n");
            break;
      default:
            printf("  \n");
            break;
      }
      } while (choix != 5);
}