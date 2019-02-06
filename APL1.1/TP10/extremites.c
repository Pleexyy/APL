#include <stdlib.h>
#include <stdio.h>

int main(void) {
  printf("%f\n", +1.0/0.0); // Affiche + l'infini
  printf("%f\n", -1.0/0.0);	// Affiche - l'infini
  printf("%f\n", -0.0/0.0); // Affiche Not a Number
  return EXIT_SUCCESS;
}