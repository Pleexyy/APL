#include <stdio.h>
#include <stdlib.h>

#define HAUTEUR 30 // Constante modifiable définie à 30

int tableau[HAUTEUR][HAUTEUR]; // Initialisation tableau en fonction de la constante définie précedemment
int N;    /* degré du triangle */
int I, J; /* indices courants  */

int main(int argc, char const *argv[])
{
    do
    {
        printf("Entrez le degré N du triangle (max 30) : ");
        scanf("%d", & N);
    } while (N > HAUTEUR - 1 || N < 0); // Test pour voir si le chiffre entré respecte les conditions pour etre évalué

    for (I = 0; I <= N; I++)
    {
        tableau[I][I] = 1;
        tableau[I][0] = 1;
        for (J = 1; J < I; J++)
            tableau[I][J] = tableau[I - 1][J] + tableau[I - 1][J - 1];
    }
    /* Affichage des résultats */
    printf("Triangle de Pascal de degré %d :\n", N);
    for (I = 0; I <= N; I++)
    {
        printf(" N=%2d", I);
        for (J = 0; J <= I; J++)
            if (tableau[I][J])
                printf("%5d", tableau[I][J]);
        printf("\n");
    }
    return 0;
}
