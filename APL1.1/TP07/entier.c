/* Entier premier 
Un entier est premier si et seulement si il admet exactement deux diviseurs stricts : 1 et lui-même. 
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {
int entier = 0;
int i = 0;
printf("Veuillez entrer un entier\n");
scanf("%d", & entier);

for (i = 2; i < entier; i++) {
    if (entier%i == 0) { // si le modulo (reste de la division) de l'entier saisie est de 0, l'entier n'est pas premier
        printf("La valeur saisie n'est pas un entier premier");
        return EXIT_SUCCESS;    
    } 
}

    if (entier == 1) {
    	printf("L'entier saisie n'est pas un entier premier");
    	return EXIT_SUCCESS;
    }   
    
    printf("%d est premier\n", entier); // Sinon, l'entier saisie est un entier premier
    return EXIT_SUCCESS;
}