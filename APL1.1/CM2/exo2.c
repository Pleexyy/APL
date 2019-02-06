/* Lecture ligne de commande */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i, produit;
    char *c1;
    char *c2;
    unsigned long l1, l2, resultat;
    long valeur;
    char *next;

    c1 = argv[1]; /* c1 = premier argument */
    c2 = argv[2]; /* c2 = deuxieme argument */

    l1 = strtoul(c1, NULL, 10); /* Converti c1 en unsigned long */
    l2 = strtoul(c2, NULL, 10); /* Converti c2 en unsigned long */

    printf("%lu %lu\n", l1, l2); /* Affiche l1 et 12 */

    resultat = l1 * l2; /* Afficher le produit des 2 arguments */

    /* Capture erreurs */
    /* Check l'ensemble des arguments donnés */
    for (i = 1; i < argc; i++) {
        /* Obtient une valeur si échec */
        valeur = strtol (argv[i], &next, 10);

        if ((next == argv[i]) || (*next != '\0')) {
            printf ("'%s' n'est pas valide\n", argv[i]);
        } 

        else {
            printf ("'%s' donne %ld\n", argv[i], valeur);
        }
    }

    printf("produit des deux premiers arguments = %lu\n", resultat); /* Affiche le produit des deux premiers arguments */

    return 0;
}
