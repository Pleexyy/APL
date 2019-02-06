#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char tab[7] = "pokemon"; // Initialisation "vrai" mot de passe
	printf("Entrez un mot de passe\n");

	if (strlen(argv[1]) > 26)
	{
		printf("L'authentification a échouée\n");
		return EXIT_FAILURE;
	}

	if (strcmp(argv[1], tab) == 0)
	{											  // Si le mot de passe correspond à celui défini
		printf("L'authentification a réussie\n"); // Succès
	}

	else
	{
		printf("L'authentification a échouée\n"); // Echec
	}

	return EXIT_SUCCESS;
}
