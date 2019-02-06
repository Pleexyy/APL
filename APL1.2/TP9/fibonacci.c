/* Calcul le 9eme terme de la suite de fibonacci */
#include <stdio.h>
#include <stdlib.h>

int fib(int val){
	if (val < 2) {
		return val;
	}
	else{
		return fib(val-1) + fib(val-2);
	}
}

int main(int argc, char const *argv[])
{
	printf("%d\n", fib(9)); /* Affiche le 9e terme de la suite */
	return 0;
}