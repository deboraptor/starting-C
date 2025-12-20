/* 
https://www.pandacodeur.com/pages/exercices/langage-c-exo/le-palindrome-langage-c.html

Ecrire un Programme C qui lit une chaîne de caractères et vérifie si elle est palindrome ou non. 
Le palindrome, du grec palindromos, « qui revient sur ses pas », est un mot ou un groupe de mots 
qui peut être lu indifféremment de gauche à droite ou de droite à gauche, comme par exemple les 
mots « kayak », « radar », « coloc », « rêver », « ressasser ».
*/

#include <stdio.h>
#include <string.h>

int isCoucou(char *, char *);
int lenIs(char *);
void ask4String(char *);
int isPalindrome(char *);

int main(void)
{   
    char string[51];

    ask4String(string);

    //int res = isCoucou(string);
    //printf("Typed word is 'coucou': %d\n", res);

    int len = lenIs(string);
    //printf("Longueur = %d\n", len);

    isPalindrome(string);
}

int isCoucou(char *a, char *b)
{    
    int cmp = strcmp(a, b);
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

    len = strlen(string); // TODO: retourne un size_t, à améliorer

    return len;
}

void ask4String(char *string)
{
    printf("Entrez un mot: ");
    scanf("%50s", string); // %Ns -> bloquer à 50 caractères max | pas &mot car le nom d’un tableau représente déjà son adresse
}

int isPalindrome(char *string)
{
    size_t taille = lenIs(string);
    int i;
    long unsigned int mid = taille / 2;
    //printf("dernière lettre = %c\n", string[taille-1]);

    /*
    si 
    debut à moitié (on stocke)

    et 
    moitié à fin (inversé)

    est égal -> palindrome
    */

    char a[51];
    for (i = 0; i <= mid; i++)
    {   
        a[i] = string[i];
        //printf("%c\n", string[i]);
    }

    char b[51];
    for (i = mid; i < taille; i++)
    {   
        b[i] = string[i];
        //printf("%c\n", string[i]);
    }

    char inverse[51];
    for (i = 0; i < taille; i++)
    {   
        inverse[i] = b[taille-1-i];
    }

    //printf("%s\n", inverse);
    inverse[taille] = '\0';
    //printf("a = %s\n", a);
    //printf("inverse =%s\n", inverse);
    printf("Palindrome ? %d\n", isCoucou(a, inverse));
}