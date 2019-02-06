#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hauteur = 0;
    int colonne = 0;
    int ligne = 0;
    char choix;

do {
    printf("_______________\n");
    printf("1) Triangle\n"); // 1
    printf("2) Carré\n");    // 2
    printf("q) Quitter\n");  // q
    printf("Votre choix ?\n");
    scanf(" %c", &choix);

    if (choix == '1')     // Choix 1
    {
        printf("Hauteur ?\n");
        scanf("%d", &hauteur);

        for (ligne = 0; ligne < hauteur; ligne++)
        {
            for (colonne = 0; colonne < ligne + 1; colonne++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    if (choix == '2')     // Choix 2
    {
        printf("Hauteur ?");
        scanf("%d", &hauteur);

        for (colonne = 0; colonne < hauteur; colonne++)
        {
            printf("*");
        }
        printf("\n");
        for (ligne = hauteur - 2; ligne > 0; ligne--)
        {
            printf("*");
            for (colonne = hauteur - 2; colonne > 0; colonne--)
            {
                printf(" ");
            }
            printf("*\n");
        }
        for (colonne = 0; colonne < hauteur; colonne++)
        {
            printf("*");
        }
        printf("\n");
    }

}while (choix != 'q');
    return 0;
}