#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

void compareFichiers(FILE *fp1, FILE *fp2) 
{ 

	char ch1 = getc(fp1); 
	char ch2 = getc(fp2);

	if (ch1 != ch2) 
	{ 
		printf("Fichiers non identiques !\n"); 
	} else {
	ch1 = getc(fp1); 
	ch2 = getc(fp2); 
	
	printf("Fichiers identiques !");
}
	
}


int main(int argc, char const *argv[])
{
	const char *f1;
	const char *f2;

	f1 = argv[1];
	f2 = argv[2];

	FILE *fp1 = fopen(f1, "r"); 
	FILE *fp2 = fopen(f2, "r"); 

	if (fp1 == NULL || fp2 == NULL) 
	{ 
		printf("Erreur ouverture des fichiers"); 
		exit(0); 
	} 

	compareFichiers(fp1, fp2);

	fclose(fp1); 
	fclose(fp2); 
	return 0; 

}
