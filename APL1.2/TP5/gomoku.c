#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define SIZE 15
int i,j,d;

int main(void){

    char table[SIZE][SIZE]={' '};
    int jeu=1;
    char d; // mur du bas
    char joueur[2];
    while(jeu=1){
    // lire l'entrée

    printf("\nEntrer les deplacement (Chiffre Caractere) : ");
    scanf("%c %c", &joueur[0], &joueur[1]);
    int x;
    /* les instructions switch à transformer d’entrée en entier */
    switch(joueur[0]){
      case '1':
        x=0;
        break;
      case '2':
        x=1;
        break;
      case '3':
        x=2;
        break;
      case '4':
        x=3;
        break;
      case '5':
        x=4;
        break;
      case '6':
        x=5;
        break;
      case '7':
        x=6;
        break;
      case '8':
        x=7;
        break;
      case '9':
        x=8;
        break;
      case 'A':
        x=9;
        break;
      case 'B':
        x=10;
        break;
      case 'C':
        x=11;
        break;
      case 'D':
        x=12;
        break;
      case 'E':
        x=13;
        break;
      case 'F':
        x=14;
        break;

    }

    int y;
    switch(joueur[1]){
        case 'a':
        y=14;
        break;
        case 'b':
        y=13;
        break;
        case 'c':
        y=12;
        break;
        case 'd':
        y=11;
        break;
        case 'e':
        y=10;
        break;
        case 'f':
        y=9;
        break;
        case 'g':
        y=8;
        break;
        case 'h':
        y=7;
        break;
        case 'i':
        y=6;
        break;
        case 'j':
        y=5;
        break;
        case 'k':
        y=4;
        break;
        case 'l':
        y=3;
        break;
        case 'm':
        y=2;
        break;
        case 'n':
        y=1;
        break;
        case 'o':
        y=0;
        break;
    }

    table[y][x]='O';
    printf("%d %d\n", x, y);
    printf("%c %c\n", joueur[0], joueur[1]);
    // imprimer le tableau
    char c;// mur latérale
    c='o';
    for(i=0;i<SIZE;i++){
      printf("\n");
      /* impression du mur latéral gauche en déplacement */
      printf("%c |",c);
      /* Pour que, à la prochaine itération, 
      c contienne la valeur des caractères précédents */
      c--; 
      for(j=0;j<SIZE;j++)
        printf(" %c", table[i][j]); // Pour imprimer le tableau 15x15
      printf("\n");
      // impression de la bordure inférieure des caractères
      printf(" - - - - - - - - - - - - - - -");
      printf("\n");
      printf(" 1 2 3 4 5 6 7 8 9 A B C D E F");
    }
    return 0;

}