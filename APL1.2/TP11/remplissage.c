#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CAPACITE 10

int main(int argc, char const *argv[])
{
	int val = 0;
	int i = 0;
	int min = -50;
	int max = 50;
	int plus_grand = -50;
	int plus_grand_index = 0;

	srand(time(NULL));
	int tableau[CAPACITE];
	for (i = 0; i < CAPACITE; i++)
	{
		int random = rand() % (max - min + 1) + min; /* Genere un nombre aléatoire entre -50 à 50 */
		tableau[i] = random;						 /* Cases du tableau valent random */
	}

	for (i = 0; i < CAPACITE; i++)
	{
		printf("+-----");
	}
	printf("+\n");

	for (i = 0; i < CAPACITE; i++)
	{
		printf("| %3d ", tableau[i]);
	}

	printf("|\n");

	for (i = 0; i < CAPACITE; i++)
	{
		printf("+-----");
	}

	printf("+");

	return EXIT_SUCCESS;
}