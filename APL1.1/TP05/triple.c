#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int entier = 1234;
  printf("Veuillez entrer un entier naturel\n");
  scanf("%d", & entier);
  if (entier <= 0) {
    printf("Ceci n'est pas un entier naturel\n");
  }

  int reste = entier % 3;
  
  if (reste == 0) {
    printf("Resultat : %d\n", entier);
  }
  if (reste == 1) {
    printf("Resultat : %d\n", entier - 1);
  }
  if (reste == 2) {
    printf("Resultat : %d\n", entier + 1);
  }
}
