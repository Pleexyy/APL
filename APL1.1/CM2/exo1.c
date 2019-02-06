/* Chaîne de caractères */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int i = 0;
	int n;
	int len = 0;
	char c;
	char s[11];

	scanf("%d", &n); /* Lecture entier */
   	c = getchar(); 	/* Lecture d'un caractère */
	scanf("%10s", s); /* Lecture chaine caractère */

    len = strlen(s) + 1; /* Récupère la taille de la chaine de caractère */
    printf("%d\n", len); /* L'affiche */

	/*/* for (i = 0; i < len; i++) /* Boucle allant de 0 à la taille de la chaine de caractère */
  	/*{*/
        if (len == n) /* si l'entier correspond au nombre de caractères contenus dans la chaine */
        {
            printf("1\n"); /* On affiche 1 */
        }
        else 
        {
        	printf("0\n"); /* Sinon on affiche 0 */
        }
    } 

	return 0;
}