/* Début de l'exercice, partie qui calcule une factorielle */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 1000

int main(int argc, char const *argv[])
{
	int i, k, resultat;
    printf("Entrez un nombre entier positif\n");
    scanf("%d",&k); /* Récupère l'entier entré */
    resultat = 1;

    if (k <= MAX) {

    for (i = 2; i <= k; i++) { 		/* Boucle jusqu'à i inférieur ou égale à la valeur saisie */
        resultat = resultat * i;
    }

    printf("La factorielle de %d est %d ", k, resultat); /* Affichage résultat */
    printf("\n");
}

    if (k > MAX) { /* Si k dépasse le maximum fixé dans le source (1000 ici) */
        printf("La valeur saisie ne doit pas dépasser %d\n", MAX);
        return EXIT_FAILURE;
    }

}