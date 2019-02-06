/* PGCD */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int entier1 = 0;
    int entier2 = 0;
    int reste = 1;

    int a = 0;
    int b = 0;

    printf("Veuillez entrer un entier naturel supérieur ou égal à 0\n");
    scanf("%d", &entier1);
    printf("Veuillez entrer un second entier naturel supérieur ou égal à 0\n");
    scanf("%d", &entier2);

    a = entier1;
    b = entier2;

    if (entier2 == 0) // Si l'entier2 est de 0, le PGCD est l'entier1
    {
        printf("Le PGCD de %d et %d est %d\n", entier1, entier2, entier1);
        return EXIT_SUCCESS;
    }

    if ((entier1 != 0) || (entier2 != 0))
    {
        while (reste != 0)
        {
            reste = a % b; // On effectue la division euclidienne de a par b et on note r le reste.
            b = a;         // Ensuite, b devient a et r devient b comme sur le tableau ci-dessous; et on recommence
            b = reste;
        }

        printf(" Le PGCD de %d et %d est %d\n", entier1, entier2, a);
    }
}