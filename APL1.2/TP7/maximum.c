#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Element Element;
struct Element
{
	unsigned short nombre;
	Element *suivant;
};

typedef struct Liste Liste;
struct Liste
{
	Element *premier;
};

Liste *initialisation()							 /* Fonction qui créée la structure de contrôle et le premier élément de la liste */
{												 /* type de données est Liste et la variable s'appelle liste */
	Liste *liste = malloc(sizeof(*liste));		 /* alloue dynamiquement la mémoire pour la structure de contrôle */
	Element *element = malloc(sizeof(*element)); /* Mémoire nécessaire au stockage du premier élément */

	if (liste == NULL || element == NULL)
	{
		exit(EXIT_FAILURE); /* test si erreur lors allocation mémoire */
	}
	/* Si tout s'est bien passé, on définit les valeurs de notre premier élément */
	element->nombre = 0; /* La donnée nombre est mise à 0 par défaut */
	element->suivant = NULL;
	liste->premier = element;

	return liste;
}

void insertion(Liste *liste, int nvNombre)		 /* Insertion nouvel élément en début de liste */
{												 /* prend en paramètre l'élément de contrôle liste (qui contient l'adresse du premier élément) et le nombre à stocker dans le nouvel élément que l'on va créer */
												 /* Création du nouvel élément */
	Element *nouveau = malloc(sizeof(*nouveau)); /* on alloue l'espace nécessaire au stockage du nouvel élément */
	if (liste == NULL || nouveau == NULL)
	{
		exit(EXIT_FAILURE);
	}
	nouveau->nombre = nvNombre;

	/* Insertion de l'élément au début de la liste */
	nouveau->suivant = liste->premier; /* fait pointer notre nouvel élément vers le premier élément de la liste */
	liste->premier = nouveau;		   /* fait pointer le pointeur premier vers notre nouvel élément. */
}

void afficherListe(Liste *liste) /* Afficher la liste chaînée */
{								 /* En partant du premier élément et afficher chaque élément un à un en « sautant » de bloc en bloc. */
	if (liste == NULL)
	{
		exit(EXIT_FAILURE);
	}

	Element *actuel = liste->premier;

	while (actuel != NULL)
	{
		printf("%d -> ", actuel->nombre);
		actuel = actuel->suivant;
	}
	printf("NULL\n");
}

int main(int argc, char const *argv[])
{
	Liste *maListe = initialisation();

	int i = 0;
	unsigned short min = 111;
	unsigned short max = 999;
	srand(time(NULL)); /* initialisation de rand */

	for (i = 0; i < 10; i++) /* 10 entiers de type unsigned short choisis aléatoirement entre 111 et 999 */
	{
		unsigned short nombre_aleatoire = rand() % (max - min) + min; /* Genere un nombre aléatoire entre 111 et 999 */
		insertion(maListe, nombre_aleatoire);
	}
	/*suppression(maListe); */
	afficherListe(maListe);

	return 0;
}
