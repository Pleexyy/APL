#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CAPACITE 10
#define min -50
#define max 50

int val = 0;
int i = 0;

int main(int argc, char const *argv[])
{
    int random;
    srand(time(NULL));
    int tableau[CAPACITE];
    // Remplissage du tableau
    for (i = 0; i < CAPACITE; i++)
    {
        random = rand() % (max - min + 1) + min; /* Genere un nombre aléatoire entre -50 à 50 */
        tableau[i] = random;                     /* Cases du tableau valent random */
    }
    // Contour du tableau
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

    printf("\nVeuillez entrer une valeur comprise entre -50 et 50\n");
    scanf("%d", &val);

    for (i = 0; i < CAPACITE; i++)
    {
        if (val == tableau[i]) /* Si une case du tableau correspond à la valeur saisie */
        {
            printf("%d\n", i);
            return EXIT_SUCCESS;
        }
    }
    printf("-1\n"); // On sort de la boucle for pour afficher -1
}
