/* Écrire une fonction */

#include <stdio.h>
#include <stdlib.h>
 
unsigned int add (unsigned int, unsigned int, short *); /* Fonction qui renvoie somme deux entiers positifs */
 
int main(void) {
  unsigned int res;
  unsigned int n, m;
  short int f;
 
  scanf("%d", &n);
  scanf("%d", &m);
 
  ... = add (..., ..., ...);
 
  if (...) {
    res = n + m; /* somme de deux entiers positfs */
    printf("Tout s'est bien passé : %d\n", res);
  }
  else {
    printf("Aïe!\n");
  }
  return EXIT_SUCCESS;
}



#include <stdio.h>
#include <limits.h>
 
/* int main(void)
{
  int i = 0;
  int sum = 0;
 
  while(sum < INT_MAX - i)
    sum += i++;
 
  printf("i=%d sum=%d\n", i, sum);
  return 0;
} */