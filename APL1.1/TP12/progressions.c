#include <stdio.h>
#include <stdlib.h>
#include <time.h>

<<<<<<< HEAD
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
=======
	int main(int argc, char const *argv[])
	{
		
	int ligne, colonne, ligne2, colonne2;
	int tableau[2][5];
	int cumul = 0;

			for (colonne = 0; colonne < 2; colonne ++) {
				for (ligne = 0; ligne < 5; ligne ++) {
					tableau[colonne][ligne] = ligne + 1;
			printf("%d  ", tableau[colonne][ligne]);
		}
>>>>>>> a9b5fe74bd522565c4d9bee528adf4499b4af48b

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

    for (colonne = 0; colonne < 2; colonne++)
    {
        for (ligne = 0; ligne < 5; ligne++)
        {
            printf("%d  ", tableau[colonne][ligne]);
        }
        printf("\n");
    }

    printf("\n");

    for (colonne = 0; colonne < 3; colonne++)
    {
        for (ligne = 0; ligne < 5; ligne++) // Tableau 2
        {
            printf("%2d  ", tableau2[colonne][ligne]);
        }

        printf("\n");
    }

    printf("\n");

    for (colonne = 0; colonne < 5; colonne++)
    {
        for (ligne = 0; ligne < 5; ligne++) // Tableau 3
        {
            if (ligne < colonne)
            {
                printf("%d  ", tableau3[colonne][ligne]);
            }
            else
            {
                printf("%d  ", tableau3[colonne][ligne]);
            }
        }
        printf("\n");
    }
}