#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    for (i = 1; i < argc; i++)
    {
        printf("%c\n", argv[i][0]); // 0 = premier caractère de l'argument i
    }
    return 0;
}