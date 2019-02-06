#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])

{
	float xA; // Axe abcisse du point A
	float yA; // Axe ordonnée du point A

	float xB; // Axe abcisse du point A
	float yB;	// Axe abcissent du point B

	float AB = 0;

	printf("Veuillez entrer les coordonnées des abcisses du point A \n");
	scanf("%f", &xA);

	printf("Veuillez entrer les coordonnées des ordonnées du point A \n");
	scanf("%f", &yA);

	printf("Veuillez entrer les coordonnées des abcisses du point B \n");
	scanf("%f", &xB);

	printf("Veuillez entrer les coordonnées des ordonnées du point B \n");
	scanf("%f", &yB);

	float res1 = (xB - xA);
	float res2 = (yB - yA);

	AB = sqrt(pow(res1, 2)+(res2, 2));
	printf("La distance entre les deux points est de %f\n", AB);

}