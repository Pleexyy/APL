#include <stdio.h>
#include <stdlib.h>

int hauteur = 0;
int j = 0;
int i = 0;
int main(void)
{
	printf("Entrez la hauteur ");
	scanf("%d", &hauteur);
	for (j = 0; j < hauteur; j++)
	{
		for (i = 0; i < hauteur + j; i++)
		{
			if (i < (hauteur - (j + 1)))
			{
				printf(" ");
			}
			if (i >= hauteur - (j + 1))
			{
				printf("*");
			}
		}
		printf("\n");
	}
}