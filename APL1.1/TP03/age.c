#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int jour_actuel = 0;
    int mois_actuel = 0; /* Demande la date du jour au format JJ/MM/AA */
    int annee_actuelle = 0;
    int age = 0;
    int jour_naissance = 0;
    int mois_naissance = 0; /* Demande la date de naissance au format JJ/MM/AA */
    int annee_naissance = 0;

    printf("Veuillez entrer le jour actuel \n");
    scanf("%d", & jour_actuel);
    printf("Veuillez entrer le mois actuel \n");
    scanf("%d", & mois_actuel);
    printf("Veuillez entrer l'année actuelle \n");
    scanf("%d", & annee_actuelle);

    printf("Veuillez entrer le jour de votre naissance \n");
    scanf("%d", & jour_naissance);
    printf("Veuillez entrer le mois de votre naissance \n");
    scanf("%d", & mois_naissance);
    printf("Veuillez entrer l'année de votre naissance \n");
    scanf("%d", & annee_naissance);

    if (mois_actuel < mois_naissance) {
        age = annee_actuelle - annee_naissance + 1;
        printf("L'age est de %d\n", age);
    }

    if (mois_actuel > mois_naissance) {
        age = annee_actuelle - annee_naissance;
        printf("L'age est de %d\n", age);
    }

    if ((mois_actuel == mois_naissance) && (jour_actuel > jour_naissance)) {
        age = annee_actuelle - annee_naissance;
        printf("L'age est de %d\n", age);
    }

    
    else if ((mois_actuel == mois_naissance) && (jour_actuel < jour_naissance)) {
        age = annee_actuelle - annee_naissance + 1;
        printf("L'age est de %d\n", age);
    }
    
}