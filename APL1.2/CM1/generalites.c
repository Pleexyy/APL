#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 0;
	int size = 0;
	int min = 0;
	int max = 0;
	if (argc <= 1) { /* Si aucun argument est passé à la ligne de commande */
		size = 12;
		min = 0;
		max = 20;
	}
	else {
	    size = strtol(argv[1], NULL, 10); /* Converti le premier argument en int
	    pour pouvoir travailler avec (taille du tableau désiré) */
		min = strtol(argv[2], NULL, 10); /* valeur minimale du tableau désirée */
		max = strtol(argv[3], NULL, 10); /* valeur maximale du tableau */
	}

	if (min > max)  {
		printf("La valeur minimum doit etre inférieure à la valeur maximale !\n");
		return 0;
	}

	if (max - min <= size) {
		printf("Erreur lors de saisie des valeurs, veuillez recommencer");
		return 0;
	}

	int *array = malloc(size *sizeof(*array));
	if (!array) {
		printf("Problème lors de l'allocation de mémoire");
		exit(EXIT_FAILURE);
	}

	srand(time(NULL));
	for (i = 0; i < size; i++)
	{
		int random = rand() % (max - min + 1) + min; /* Genere un nombre aléatoire entre min et max */
		array[i] = random;                         /* Cases du tableau valent random */
	}

	for (i = 0; i < size; i++)
	{
		printf("%d ", array[i]); /* Affiche le tableau de case souhaité */
	}

	free(array); /* Libère la mémoire */
	return 0;
}
