/*
https://www.pandacodeur.com/pages/exercices/langage-c-exo/le-nombre-de-munchhausen-langage-c.html

Un nombre de Münchhausen est un nombre entier naturel qui, lorsqu'il est décomposé en ses chiffres, est égal à la 
somme de ces mêmes chiffres, chacun élevé à la puissance de lui-même. Pour ces calculs, nous acceptons que 00 = 0.
 
 Un calcul élémentaire prouve que n est majoré par 2bb ; dans une base donnée, il n'existe donc qu'un nombre fini 
 de perfect digit-to-digit invariants, dont on peut programmer le calcul. Zéro et un sont des perfect digit-to-digit 
 invariants dans toutes les bases. En base dix, les deux seuls autres perfect digit-to-digit invariants sont 3 435 
 et 438 579 088 :

Par exemple, en base 10 :

    Le nombre 3435 est un nombre de Münchhausen, car : 3^3 + 4^4 + 3^3 + 5^5 = 27 + 256 + 27 + 3125 = 3435

L'objectif est d'écrire un programme en C qui permet de vérifier si un nombre donné par l’utilisateur est un nombre 
de Münchhausen. Le programme doit utiliser uniquement des structures conditionnelles et/ou des boucles, mais une 
contrainte supplémentaire s’ajoute : vous devez utiliser une structure Ternaire (voir Td 01). 
*/