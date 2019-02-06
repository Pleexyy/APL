#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NOMBRE_MAX 100
#define TENTATIVE_MAX 5

int main (void) {
  int nombre = 0;
  int x = 0;
  int i = 0; 
  int tentatives = 0;

  srand(time(NULL));
  x = rand() % NOMBRE_MAX + 1;
  // printf("%d\n", x);

  do {
    printf("Veuillez saisir un nombre compris entre 0 et %d \n", NOMBRE_MAX);
    scanf("%d", & nombre);

    tentatives = tentatives + 1;

    if (nombre > x) {
      printf("C'est moins, réesayez\n");
    }

    if (nombre < x) {
      printf("C'est plus, réesayez\n");
    }

    if (tentatives >= TENTATIVE_MAX) {
      printf("Vous avez perdu\n");
      return EXIT_SUCCESS;
    }
  } while (nombre != x);
  
  if (nombre == x); {
    printf("Vous avez gagné");
    return EXIT_SUCCESS;
  }
}
