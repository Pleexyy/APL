/* Écrivez une fonction qui prend en argument un tableau de réels et affiche ses éléments séparés par une virgule.
Employez la récursivité plutôt qu'une boucle */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int i;
	for (i = 0; i < argc-1; i++)
	{
		printf("%s \n", argv[i]);
	}
	getchar();
	return EXIT_SUCCESS;
}