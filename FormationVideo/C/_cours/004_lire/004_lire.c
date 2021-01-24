/**
 *      YouTube: https://www.youtube.com/watch?v=I9xlZGDMfrw&list=PLrSOXFDHBtfEh6PCE39HERGgbbaIHhy4j&index=4
 *      Description:  Langage C #4 - lire données au clavier
 *      Created:  18-01-20 | Revision: --.
 *      Compiler:  GNU Compiler - GCC.
 *      Compilation: gcc 004_lire.c -o prog
 *      Author:  Samuel Jacquet
 */

/*
    maVariable : contenu de la variable (exemple maVariable = 15)
    &maVariable : adresse où est stockée la variable
*/

#include <stdio.h> 

int main(void)
{
    int ageUtilisateur = 0;
    char lettre = 'A';

    printf("Entrez une lettre : ");
    scanf("%c",&lettre);

    printf("Lettre choisie : %c\n", lettre);

    printf("Quel age avez-vous ? ");
    scanf("%d",&ageUtilisateur);

    printf("Votre age : %d\n", ageUtilisateur);

    return 0;
}