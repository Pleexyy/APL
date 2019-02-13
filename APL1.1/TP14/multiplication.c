#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i, produit;
    char *c1;
    char *c2;
    unsigned long l1, l2, resultat;

    c1 = argv[1]; // c1 = premier argument
    c2 = argv[2]; // c2 = deuxieme argument

    //printf("%s %s\n", c1, c2);

    l1 = strtol(c1, NULL, 10); // Converti c1 en long
    l2 = strtol(c2, NULL, 10); // Converti c2 en long

    printf("%lu %lu\n", l1, l2); // Affiche l1 et 12

    resultat = l1 * l2; // Afficher le produit des 2 arguments

    // Capture erreurs
    // Si un des arguments entré n'est pas un entier
    if( ) {

    }

    // Quand un des arguments est manquant
    if( ){

    }

    printf("produit des deux premiers arguments = %lu\n", resultat); // Affiche le produit des deux premiers arguments

    return 0;
}
