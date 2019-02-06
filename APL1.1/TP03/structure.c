#include <stdio.h>
#include <stdlib.h>


int nb1 = 0;
int nb2 = 1;

int main (void){
  printf("%d && %d => %d\n", nb1, nb2, (nb1 && nb2));
  printf("%d || %d => %d\n", nb1, nb2, (nb1 || nb2));
}
