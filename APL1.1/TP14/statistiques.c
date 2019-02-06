#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char chaine[201];
    char lettre = 'e';
    int len = 0;
    int count = 0;
    int lettres_differentes = 1;
    int deja_trouve = 0;
    int j, i, c;

    printf("Entrez du texte\n");
    scanf("%200s", chaine);

    len = strlen(chaine); // Récupère la taille de la chaine de caractère

    // le nombre de 'e' que contient la chaine de caracteres

    for (i = 0; i < len; i++) // Boucle allant de 0 à la taille de la chaine de caractère
    {
        if (chaine[i] == lettre) // Si une certaine case du tableau vaut e
        {
            count = count + 1; // On compte +1
        }
    }

    printf("Le nombre de 'e' dans %s est de %d\n", chaine, count); // Affichage du nombre de "e"
    // Le nombre de caractères différents qu'elle contient
    for (i = 1; i < len; i++)
    {
        deja_trouve = 0;
        for (j = 0; j <= i - 1; j++)
        {
            if (chaine[i] == chaine[j])
            {
                deja_trouve = 1;
                break;
            }
        }
        if (deja_trouve == 0)
        {
            lettres_differentes = lettres_differentes + 1;
        }
    }
    printf("Le nombre de caractères différents de la chaine %s est :%d", chaine, lettres_differentes);
}