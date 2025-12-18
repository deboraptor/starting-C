/* 
https://www.pandacodeur.com/pages/exercices/langage-c-exo/le-palindrome-langage-c.html

Ecrire un Programme C qui lit une chaîne de caractères et vérifie si elle est palindrome ou non. 
Le palindrome, du grec palindromos, « qui revient sur ses pas », est un mot ou un groupe de mots 
qui peut être lu indifféremment de gauche à droite ou de droite à gauche, comme par exemple les 
mots « kayak », « radar », « coloc », « rêver », « ressasser ».
*/

#include <stdio.h>
#include <string.h>

int palindrome(void);

int main(void)
{
    palindrome();
    printf("return : \n");
}

int palindrome(void)
{
    unsigned char mot;
    char *coucou = "coucou";

    printf("Entrez un mot: ");
    scanf("%s", &mot);
    
    //printf("mot: %s\n", &mot);

    if (mot == *coucou)
    {   
        printf("oui");
        return 1;
    }
    else
    {   
        printf("non");
        return 0;
    }
}