#include <stdio.h>
#include <stdlib.h>

#define CONSTANT 11

int main(void)
{
    int i = 0;
    int resultat = 0;
    int compteur = 0;
    printf("X   |   ");

    // Met en place la colonne x horizontale
    for (compteur = 0; compteur <= CONSTANT; compteur++)
    {
        printf("%d    ", compteur);
    }

    printf("\n");

    // Délimitation
    for (compteur = 0; compteur <= CONSTANT; compteur++)
    {
        printf("------");
    }

    printf("\n");

    // Met en place la colonne x verticale
    for (compteur = 0; compteur <= CONSTANT; compteur++)
    {
        printf("%d   | \n", compteur);
        printf("\n");
    }

    // Affiche la première ligne de calculs(0)
    for (compteur = 0; compteur <= CONSTANT; compteur = compteur + 1)
    {
        printf("0    ");
    }

    do
    {
        printf("%d", compteur);
        compteur = compteur + 1;
    } while (compteur <= CONSTANT);
}