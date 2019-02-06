#include <stdio.h>
#include <stdlib.h>

int main (void) {
int entier = 1234;
int entier2 = 5678;
printf("Entrez un entier en hexadécimal :");
scanf("%x", & entier);
printf("L'entier tapé, convertis en décimal est : %d\n", entier);
printf("Entrez un second entier en hexadécimal :");
scanf("%x", & entier2);
printf("L'entier tapé, convertis en décimal est : %d\n", entier2);
}
