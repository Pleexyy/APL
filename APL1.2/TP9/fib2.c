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

void display(int n) {
	if (n != 0) {
		display(n-1);
	}
	printf("%d\n", fib(n));
}

int main(int argc, char const *argv[])
{
	int n = 0;
	printf("Entrez un chiffre\n");
	scanf("%d", &n);
	display(n);
	return 0;
}
