#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CAPACITE 10

int i = 0;
int min = -50;
int max = 50;
int tableau[CAPACITE];
int temp = 0;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int random;
    for (i = 0; i < CAPACITE; i++)
    {
        random = rand() % (max - min + 1) + min; /* Genere un nombre aléatoire entre -50 à 50 */
        tableau[i] = random;                     /* Cases du tableau valent random */
    }
    // Tableau normal
    for (i = 0; i < CAPACITE; i++)
    {
        printf("+-----");
    }
    printf("+\n");

    for (i = 0; i < CAPACITE; i++)
    {
        printf("| %3d ", tableau[i]);
    }

    printf("|\n");

    for (i = 0; i < CAPACITE; i++)
    {
        printf("+-----");
    }

    printf("+");
    printf("\n\n");

    // Tableau inversé

    // Forme du tableau
    for (i = 0; i < CAPACITE; i++)
    {
        printf("+-----");
    }
    printf("+\n");

    //Remplissage du tableau
    for (i = 0; i < CAPACITE / 2; i++)
    {
        temp = tableau[i];
        tableau[i] = tableau[CAPACITE - 1 - i];
        tableau[CAPACITE - 1 - i] = temp;
    }

    // Impression du tableau
    for (i = 0; i < CAPACITE; i++)
    {
        printf("| %3d ", tableau[i]);
    }

    printf("|\n");
    // Forme du tableau
    for (i = 0; i < CAPACITE; i++)
    {
        printf("+-----");
    }

    printf("+");

    return EXIT_SUCCESS;
}