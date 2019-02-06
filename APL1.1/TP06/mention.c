#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int entier = 0;
    printf("Veuillez saisir votre moyenne au bac\n");
    scanf("%d", & entier);

    while ((entier < 10) || (entier > 20)) {
    printf("Veuillez réentrer votre moyenne");
    return EXIT_SUCCESS;
    }

    if ((entier > 20) || (entier < 0)) {
        printf("Il y a eu un problème lors de la saisie, veuillez réentrer votre moyenne %d\n");
        // return EXIT_SUCCESS;
    }

    /*if ((entier >= 0) && (entier < 10)) {
        printf("Vous n'avez pas eu votre bac... %d\n");
        // return EXIT_SUCCESS;
    }

    if ((entier < 12) && (entier >= 10)) {
        printf("Vous avez obtenu votre bac sans mention %d\n");
        // return EXIT_SUCCESS;        
    }

    if ((entier >= 12) && (entier < 14)) {
        printf("Vous avez obtenu votre bac avec mention assez bien %d\n");
        // return EXIT_SUCCESS;
    }      

    if ((entier >= 14) && (entier < 16)) {
        printf("Vous avez obtenu votre bac avec mention bien %d\n");
        // return EXIT_SUCCESS;
    }

    if ((entier >= 16) && (entier <= 20)) {
        printf("Vous avez obtenu votre bac avec mention très bien %d\n");
        // return EXIT_SUCCESS;
    }
    */
}