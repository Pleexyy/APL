#include <stdio.h>
#include <stdlib.h>

#define NOMBRE_MAX 10

int main(void)
{
  int colonne = 0;
  int ligne = 0;
  int resultat = 0;
  printf("  X  |"); // Mise en place de la forme du "tableau"

  // Met en place la première ligne
  for (colonne = 0; colonne <= NOMBRE_MAX; colonne++)
  {
    printf("%3d  ", colonne);
  }

  printf("\n-----+"); // Délimitation, mise en place de la forme de la deuxième ligne

  // Délimitation en fonction de la constante NOMBRE_MAX
  for (colonne = 1; colonne < NOMBRE_MAX; colonne++)
  {
    printf("------");
  }

  printf("\n");
  for (ligne = 0; ligne <= NOMBRE_MAX; ligne = ligne + 1)
  {
    printf("%3d  |", ligne);
    for (colonne = 0; colonne <= NOMBRE_MAX; colonne++)
    {
      resultat = ligne * colonne;
      printf("%3d  ", resultat);
    }

    printf("\n");
  }
}