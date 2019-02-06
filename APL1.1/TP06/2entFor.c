/* Écrivez un programme qui demande deux entiers puis affiche dans l'ordre croissant 
tous les entiers compris entre ces deux valeurs (au sens large). */ 

#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int entier1 = 0;
    int entier2 = 0;
    printf("Veuillez entrer un entier relatif\n");
    scanf("%d", & entier1);
    printf("Veuillez entrer un second entier relatif\n");
    scanf("%d", & entier2);

    if (entier1 < entier2) {
	for (;entier1 < entier2; entier1 = entier1 + 1 ) {
	  printf("Les valeurs en dessous l'entier demandé sont : %d\n", entier1);
}
}
	else {
	for (;entier2 < entier1; entier2 = entier2 + 1 ) {
	  printf("Les valeurs au dessus l'entier demandé sont : %d\n", entier2);	
}
}
return EXIT_SUCCESS;
}
