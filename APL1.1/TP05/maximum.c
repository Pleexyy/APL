#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int entier1 = 0;
    int entier2 = 0;
    int entier3 = 0;
    printf("Veuillez entrer un entier relatif\n");
    scanf("%d", & entier1);
    printf("Veuillez entrer un second entier relatif\n");
    scanf("%d", & entier2);
    printf("Veuillez entrer un troisième entier relatif\n");
    scanf("%d", & entier3);

    if ((entier1 >= entier2) && (entier1 >= entier3)) {
        printf("L'entier entré le plus grand est : %d\n", entier1 );
        return EXIT_SUCCESS;
    }

    if ((entier1 >= entier3) && (entier1 <= entier2)) {
        printf("L'entier entré le plus grand est : %d\n", entier2 );
        return EXIT_SUCCESS;
    }      

    if ((entier1 >= entier2) && (entier1 <= entier3)) {
        printf("L'entier entré le plus grand est : %d\n", entier3 );
        return EXIT_SUCCESS;
    }

    if ((entier1 <= entier2) && (entier2 <= entier3)) {
        printf("L'entier entré le plus grand est : %d\n", entier3 );
        return EXIT_SUCCESS;
    }

    if ((entier1 <= entier2 ) && (entier2 >= entier3)) {
        printf("L'entier entré le plus grand est : %d\n", entier2 );
        return EXIT_SUCCESS;
    }
}
