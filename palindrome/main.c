/* 
https://www.pandacodeur.com/pages/exercices/langage-c-exo/le-palindrome-langage-c.html

Ecrire un Programme C qui lit une chaîne de caractères et vérifie si elle est palindrome ou non. 
Le palindrome, du grec palindromos, « qui revient sur ses pas », est un mot ou un groupe de mots 
qui peut être lu indifféremment de gauche à droite ou de droite à gauche, comme par exemple les 
mots « kayak », « radar », « coloc », « rêver », « ressasser ».
*/

#include <stdio.h>
#include <string.h>

int isCoucou(char *);
int lenIs(char *);
void ask4String(char *);

int main(void)
{   
    char string[51];

    ask4String(string);

    int res = isCoucou(string);
    printf("Typed word is 'coucou': %d\n", res);

    int len = lenIs(string);
    printf("Longueur = %d\n", len);
}

int isCoucou(char *string)
{
    char coucou[] = "coucou";    
    
    //printf("mot: %s\n", mot);
    //printf("%s\n", coucou);

    int cmp = strcmp(string, coucou);
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

int lenIs(char *string)
{
    int len = 0;

    len = strlen(string);

    return len;
}

void ask4String(char *string)
{
    printf("Entrez un mot: ");
    scanf("%50s", string); // %Ns -> bloquer à 50 caractères max | pas &mot car le nom d’un tableau représente déjà son adresse
}