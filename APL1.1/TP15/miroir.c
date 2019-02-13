#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CAPACITE 10

int i = 0;
int min = -50;
int max = 50;
int tableau[CAPACITE];
int temp = 0;

void remplissage_tableau()
{
    // Remplissage tableau
    srand(time(NULL));
    int random;
    for (i = 0; i < CAPACITE; i++)
    {
        random = rand() % (max - min + 1) + min; /* Genere un nombre aléatoire entre -50 à 50 */
        tableau[i] = random;                     /* Cases du tableau valent random */
    }
}

void remplissage_tableau_inversion()
{
    //Remplissage du tableau inversion
    for (i = 0; i < CAPACITE / 2; i++)
    {
        temp = tableau[i];
        tableau[i] = tableau[CAPACITE - 1 - i];
        tableau[CAPACITE - 1 - i] = temp;
    }
}

void afficher_tableau()
{

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
}

int main(int argc, char const *argv[])
{

    remplissage_tableau();
    afficher_tableau(); // Appel la fonction pour afficher le tableau
    printf("\n\n");

    remplissage_tableau_inversion();
    afficher_tableau(); // Appel la fonction pour afficher le tableau inversé

    return EXIT_SUCCESS;
}