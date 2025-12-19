/* 
https://www.pandacodeur.com/pages/exercices/langage-c-exo/le-palindrome-langage-c.html

Ecrire un Programme C qui lit une chaîne de caractères et vérifie si elle est palindrome ou non. 
Le palindrome, du grec palindromos, « qui revient sur ses pas », est un mot ou un groupe de mots 
qui peut être lu indifféremment de gauche à droite ou de droite à gauche, comme par exemple les 
mots « kayak », « radar », « coloc », « rêver », « ressasser ».
*/

#include <stdio.h>
#include <string.h>

int isSameWord(void);
int lenIs(void);

int main(void)
{
    int res = isSameWord();
    printf("Typed word is 'coucou': %d\n", res);

    int len = lenIs();
    printf("Longueur = %d\n", len);
}

int isSameWord(void)
{
    char coucou[7] = {'c', 'o', 'u', 'c', 'o', 'u', '\0'};
    char mot[51];
    
    printf("Entrez un mot: ");
    scanf("%50s", mot); // %Ns -> bloquer à 50 caractères max | pas &mot car le nom d’un tableau représente déjà son adresse

    //printf("mot: %s\n", mot);
    //printf("%s\n", coucou);

    int cmp = strcmp(mot, coucou);
    //printf("cmp: %d\n", cmp);

    if (cmp == 0)
    {   
        return 1;
    }
    else
    {   
        return 0;
    }
}

int lenIs(void)
{
    char string[51];
    int len = 0;

    printf("Entrez un mot: ");
    scanf("%50s", string);

    len = strlen(string);

    return len;
}