	#include <stdio.h>
	#include <stdlib.h>

	int main (void) {
		int entier1 = 0;
		int entier2 = 0;
		//int i = 0;

		printf("Veuillez entrer un entier\n");
		scanf("%d", & entier1);
		printf("Veuillez entrer un second entier\n");
		scanf("%d", & entier2);

		if ((entier1%2 == 0) || (entier2%2 == 0)) {
			printf("pair");
		}

		else {
			printf("Impair");
		}

	}