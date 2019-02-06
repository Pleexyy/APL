#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int i = 0;
	int nombre_aleatoire = 0;
	srand(time(NULL)); /* initialisation de rand */
	/*for(i=0; i<5; i++){ */
		nombre_aleatoire = rand();
		printf("%d ",nombre_aleatoire);
	}
/* } */ 
