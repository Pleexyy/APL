#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double reel = 0;

int main(int argc, char const *argv[])
{
	printf("Veuillez entrer un réel \n");
	scanf("%lf", & reel);
	printf("La valeur tronquée est %lf\n", trunc (reel)); // valeur tronquée
	printf("Chiffre des unités :%lf\n", trunc (reel/10)); // chiffre des unités
	printf("Chiffre des dixièmes :%lf\n", trunc (reel)); // chiffre des dizaines (à modifier)
}