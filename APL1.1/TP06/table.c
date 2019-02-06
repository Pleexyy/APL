#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int entier = 0;
    int i = 0;
    int resultat = 0;
    printf("Veuillez saisir un entier\n");
    scanf("%d", & entier);

    for(i = 1; i <= 10; i = i + 1) {
        resultat = entier * i;
        printf("%d x %d = %d\n", entier, i, resultat);
    }
    
}