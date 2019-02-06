#include <stdio.h>
#include <stdlib.h>

int resultat, entier = 1234;
int main (void){
  printf("Entrez un entier :");
  resultat = scanf ("%d", & entier);
  if (resultat <= 0) {
    printf("La valeur saisie n'est pas un entier\n");
    return EXIT_SUCCESS;
  }
}
