/* Écrivez un programme qui demande à l'utilisateur une valeur entière positive ou nulle, puis une valeur entière strictement positive, 
et qui affiche ensuite le quotient et le reste de la division euclidienne de la première valeur par la deuxième, 
en utilisant dans vos calculs seulement des additions et des soustractions.
*/

/*Le quotient est le résultat d'une division*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {
int entier1 = 0;
int entier2 = 0;
int quotient = 0;

printf("Veuillez entrer une valeur supérieure ou égale à 0\n");
scanf("%d", & entier1);
printf("Veuillez entrer une valeur supérieure à 0\n");
scanf("%d", & entier2);

  while (entier1 >= entier2) {
        entier1 = entier1 - entier2;
        quotient = quotient + 1;
    }

   printf("Le quotient est %d\n", quotient);
   printf("Le reste est %d\n", entier1);

}
