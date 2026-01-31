#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

//TODO: ajouter un compteur d'essais !
//TODO: gérer les erreurs (trop de caractères entrés, pas bon type de variable, etc.)

int askUser(void) {
    char rawUserInput[5];
    scanf("%s", rawUserInput);

    int userInput = atoi(rawUserInput);

    return userInput;
}

int main(void) {
    srand(time(NULL));
    int nombre = rand() % MAX;
    
    printf("~~~~~ Trouvez le nombre mystère ! ~~~~~\n");
    
    int userInput;
    do {
        userInput = askUser();
        if (userInput > nombre) {
            printf("---\n");
        } else if (userInput < nombre) {
            printf("+++\n");
        }
    } while (userInput != nombre);
    
    printf("~~~ Bravo tu as trouvé !! ~~~\n");

    return 0;
}