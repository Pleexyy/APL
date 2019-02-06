#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int entier1 = 0;
    int entier2 = 0;
    int entier3 = 0;
    printf("Veuillez entrer une valeur entière\n");
    scanf("%d", & entier1);
    printf("Veuillez entrer une seconde valeur entière\n");
    scanf("%d", & entier2);
    printf("Veuillez entrer une troisième valeur entière\n");
    scanf("%d", & entier3);

    if ((entier1 > entier2) && (entier1 < entier3)) {
        printf("L'entier entré le plus grand est : %d\n", entier3);
        printf("Le second entier entré le plus grand est : %d\n", entier1);
        printf("L'entier entré, le plus petit est : %d\n", entier2);
        return EXIT_SUCCESS;
    }

    if ((entier2 < entier1) && (entier2 > entier3)) {
        printf("L'entier entré le plus grand est : %d\n", entier1);
        printf("Le second entier entré le plus grand est : %d\n", entier2);
        printf("L'entier entré, le plus petit est : %d\n", entier3);
        return EXIT_SUCCESS;
    }

    if ((entier1 > entier2) && (entier2 < entier3)) {
        printf("L'entier entré le plus grand est : %d\n", entier1);
        printf("Le second entier entré le plus grand est : %d\n", entier3);
        printf("L'entier entré, le plus petit est : %d\n", entier2);
        return EXIT_SUCCESS;
    }

    if ((entier1 < entier2) && (entier2 < entier3)) {
        printf("L'entier entré le plus grand est : %d\n", entier3);
        printf("Le second entier entré le plus grand est : %d\n", entier2);
        printf("L'entier entré, le plus petit est : %d\n", entier1);
        return EXIT_SUCCESS;
    }

    if ((entier1 < entier3) && (entier3 < entier2)) {
        printf("L'entier entré le plus grand est : %d\n", entier2);
        printf("Le second entier entré le plus grand est : %d\n", entier3);
        printf("L'entier entré, le plus petit est : %d\n", entier1);
        return EXIT_SUCCESS;
    }  

    if ((entier1 < entier2) && (entier2 > entier3)) {
        printf("L'entier entré le plus grand est : %d\n", entier2);
        printf("Le second entier entré le plus grand est : %d\n", entier1);
        printf("L'entier entré, le plus petit est : %d\n", entier3);
        return EXIT_SUCCESS;
    }                    
}
