#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CONSTANT 26

int main(int argc, char const *argv[])
{
	int i = 0;
	char tab[8] = "pokemon";	 // Initialisation mot de passe à trouver
	char mot_de_passe[CONSTANT]; // Mdp entré par l'utilisateur
	printf("Entrez un mot de passe\n");

	for (i = 0; i < CONSTANT; i++) // On boucle jusqu'a 26 caractères
	{
		char c = getchar(); // getchar() récupère un seul caractère on doit donc boucler

		// Si on appuie sur la touche entrée on "casse" la boucle
		if (c == '\n')
		{
			break;
		}

		mot_de_passe[i] = c;
	}

	if (strcmp(mot_de_passe, tab) == 0)
	{											  // Si le mot de passe correspond à celui défini
		printf("L'authentification a réussie\n"); // Succès
		return EXIT_SUCCESS;
	}
	else
	{
		printf("L'authentification a échouée\n"); // Echec
		return EXIT_SUCCESS;
	}
}
