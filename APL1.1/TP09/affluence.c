#include <stdio.h>
#include <stdlib.h>

int lundi = 0;
int mardi = 0;
int mercredi = 0;
int jeudi = 0;
int vendredi = 0;
int moyenne = 0;

int main(int argc, char const *argv[])
{
    printf("Veuillez entrer le nombre de visiteur du Lundi ");
    scanf("%d", &lundi);
    printf("Veuillez entrer le nombre de visiteur du Mardi ");
    scanf("%d", &mardi);
    printf("Veuillez entrer le nombre de visiteur du Mercredi ");
    scanf("%d", &mercredi);
    printf("Veuillez entrer le nombre de visiteur du Jeudi ");
    scanf("%d", &jeudi);
    printf("Veuillez entrer le nombre de visiteur du Vendredi ");
    scanf("%d", &vendredi);
    printf("Veuillez entrer le nombre de visiteur du Samedi ");

    moyenne = ((lundi + mardi + mercredi + jeudi + vendredi) / 5);
    printf("Le nombre moyen de visiteurs par jour est de %d ", moyenne);
    return EXIT_SUCCESS;
}
