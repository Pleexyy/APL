	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>

	int i = 0;
	float reel = 0;
	char car;

	int main(int argc, char const *argv[])
	{
	    printf("Veuillez saisir un réel\n");
	    scanf("%e", & reel);
		printf("La notation scientifique est %e\n", reel);

		printf("Veuillez entrer un caractère\n");
		scanf("  %c", & car); // Va ignorer tous les caractères vides mise en mémoire (touche entrée préssée)

		for (i = 0; i < 5; i++) {
			putchar(car);
		}
	}