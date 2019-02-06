#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ligne, colonne;
int tableau[2][5];
int tableau2[3][5];
int tableau3[5][5];
int cumul = 0;

int main(int argc, char const *argv[])
// Initialisation des valeurs des tableaux
{
    for (ligne = 0; ligne < 2; ligne++)
    {
        for (colonne = 0; colonne < 5; colonne++) // Tableau 1
        {
            tableau[ligne][colonne] = colonne + 1;
        }
    }

    for (ligne = 0; ligne < 3; ligne++)
    {
        for (colonne = 0; colonne < 5; colonne++) // Tableau 2
        {
            tableau2[ligne][colonne] = cumul + 1;
            cumul++;
        }
    }

    for (ligne = 0; ligne < 5; ligne++)
    {
        for (colonne = 0; colonne < 5; colonne++) // Tableau 3
        {
            if (colonne < ligne)
            {
                tableau3[ligne][colonne] = colonne + 1;
            }
            else
            {
                tableau3[ligne][colonne] = 0;
            }
        }
    }

    // Affichage des tableaux

    for (ligne = 0; ligne < 5; ligne++)
    {
        for (colonne = 0; colonne < 5; colonne++)
        {
            if (ligne > 1)
            {
                printf("   ");
            }
            else
            {
                printf("%d  ", tableau[ligne][colonne]);
            }
        }

        printf("   ");

        for (colonne = 0; colonne < 5; colonne++)
        {
            if (ligne > 2)
            {
                printf("    ");
            }
            else
            {
                printf("%2d  ", tableau2[ligne][colonne]);
            }
        }

        printf("   ");

        for (colonne = 0; colonne < 5; colonne++)
        {
            printf("%d  ", tableau3[ligne][colonne]);
        }

        printf("\n");
    }
}