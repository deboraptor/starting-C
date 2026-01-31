#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 3


int game(char computerAnswer[], char userAnswer[]) {
    if (strcmp(computerAnswer, userAnswer) == 0) {
        return -1;
    } else {
        if (computerAnswer[2] == 'e' && userAnswer[2] == 'p') {
            return 1;
        }
        if (computerAnswer[2] == 'p' && userAnswer[2] == 'e') {
            return 0;
        }
        if (computerAnswer[2] == 's' && userAnswer[2] == 'p') {
            return 0;
        }
        if (computerAnswer[2] == 's' && userAnswer[2] == 'e') {
            return 1;
        }
        if (computerAnswer[2] == 'p' && userAnswer[2] == 's') {
            return 1;
        }
    }
    return 0;
}

int main(void) {
    char userAnswer[11];
    
    printf("========= choisi un outil =========\n");
    scanf("%s", userAnswer);

    // -> génère de manière random un nombre
    // qui correspond à Rock Paper Scissor

    // processeur = déterministe = pseudo-aléatoire
    // pour faire du aléatoire, on utilise l'heure actuelle en tant que seed
    srand(time(NULL));
    int randComputerAnswer = rand() % MAX;

    printf("======= la machine a choisi =======\n");

    char computerAnswer[11];
    switch (randComputerAnswer) {
        case 0:
            printf("pierre !\n");
            strncpy(computerAnswer, "pierre", 11);
            break;
        case 1:
            printf("papier !\n");
            strncpy(computerAnswer, "papier", 11);
            break;
        case 2:
            printf("ciseaux !\n");
            strncpy(computerAnswer, "ciseaux", 11);
            break;
        default:
            printf("ça bug, faut relancer\n");
    }

    int result;
    result = game(computerAnswer, userAnswer);

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    if (result == 1) {
        printf("félicitations tu as gagné !\n");
    } else if (result == 0) {
        printf("oups t'as perdu...\n");
    } else if (result == -1) {
        printf("c'est un match nul !\n");
    }
}