/* Conversion de int en char */

#include <stdio.h>
#include <stdlib.h>

int entier = 0;

int main(int argc, char const *argv[])
{
    printf("Veuillez entrez un entier supérieur ou égal à 0\n");
    scanf("%d", &entier);
    char nombre = entier;
    printf("L'entier converti en char est %c\n", nombre);
}
