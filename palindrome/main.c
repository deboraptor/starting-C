/* 
https://www.pandacodeur.com/pages/exercices/langage-c-exo/le-palindrome-langage-c.html

Ecrire un Programme C qui lit une chaîne de caractères et vérifie si elle est palindrome ou non. 
Le palindrome, du grec palindromos, « qui revient sur ses pas », est un mot ou un groupe de mots 
qui peut être lu indifféremment de gauche à droite ou de droite à gauche, comme par exemple les 
mots « kayak », « radar », « coloc », « rêver », « ressasser ».
*/

#include <stdio.h>
#include <string.h>

int isCoucou(void);
int lenIs(void);
char ask4String(void);

// TODO :
// remove to global
char string[51];

int main(void)
{   
    ask4String();

    int res = isCoucou();
    printf("Typed word is 'coucou': %d\n", res);

    int len = lenIs();
    printf("Longueur = %d\n", len);
}

int isCoucou(void)
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

int lenIs(void)
{
    int len = 0;

    len = strlen(string);

    return len;
}

char ask4String(void)
{
    printf("Entrez un mot: ");
    scanf("%50s", string); // %Ns -> bloquer à 50 caractères max | pas &mot car le nom d’un tableau représente déjà son adresse
}