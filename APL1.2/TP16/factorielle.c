#include <stdio.h>

int main(void) {
        int i, n, resultat;
        printf("Entrez un nombre entier positif\n");
        scanf("%d",&n); // Receptionne l'entier entré
        resultat = 1;

        for (i = 2; i <= n; i++) { // Boucle jusqu'à i inférieur ou égale à la valeur saisie
            resultat = resultat * i;
        }

        printf("La factorielle de %d est %d ",n, resultat); // Affichage résultat 
        printf("\n");

}