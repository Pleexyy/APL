#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int entier = 0;
  int entier2 = 0;
  printf("Veuillez entrer un entier relatif\n");
  scanf("%d", & entier);
  printf("Veuillez entrer un second entier relatif\n");
  scanf("%d", & entier2);
  if ((entier > 0 && entier2 > 0) ||
      (entier < 0 && entier2 < 0)) {
    printf("Le produit des deux entiers est positif");
  }
  if ((entier2 < 0 && entier > 0) || 
      (entier < 0 && entier2 > 0)) {
    printf("Le produit des deux entiers est négatif");
  }
}

