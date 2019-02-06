#include <stdio.h>
#include <stdlib.h>

// Fonction Triangle
int triangle (int hauteur) {       
    int ligne, colonne;

    for (ligne = 0; ligne < hauteur; ligne++)
    {
        for (colonne = 0; colonne < ligne + 1; colonne++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// Fonction Carre
int carre (int hauteur) {
    int colonne, ligne;

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

int main(void)
{
    char choix;
    int hauteur;

    do { // Faire tant que le choix est différent de q
        printf("_______________\n");
        printf("1) Triangle\n"); // 1
        printf("2) Carré\n");    // 2
        printf("q) Quitter\n");  // q
        printf("Votre choix ?\n");
        scanf(" %c", &choix);

        if (choix == '1' || choix == '2') { // Si le choix est le 1 ou le 2, on demande la hauteur de la figure
            printf("Hauteur ?");
            scanf("%d", &hauteur);
        }

        if (choix == '1') { // Si choix 1, on appel la fonction qui genere le triangle
            triangle(hauteur);
        }

        if (choix == '2') { // Si choix 2, on appel la fonction qui genere le carre
            carre(hauteur);
        }

    } while (choix != 'q');
    
    return 0; // Si choix q --> on quitte le programme 
}

