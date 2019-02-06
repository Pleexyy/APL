#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int reparations = 0;
    int reparations2 = 0;
    printf("Veuillez entrer le montant total des réparations\n");
    scanf("%d", & reparations);
    reparations2 = reparations * 0.1; /* 10% de la reparation */

    // if ((reparations >= 200) && (reparations <= 800)) {
    //    printf("La franchise correspondante au prix de votre réparation est de : %d\n", reparations2 );
    //} 

    if (reparations == 150) {
        printf("Le montant de votre réparation ne correspond pas à celle attendue pour obtenir une franchise, et la part prise en charge par l'assurance est de 0€ %d\n");
        return EXIT_SUCCESS;        
    }

    if (reparations < 200 && reparations >= 150) {
        printf("Le montant de votre réparation ne correspond pas à celle attendue pour obtenir une franchise, et la part prise en charge par l'assurance est de 0€ %d\n");
        return EXIT_SUCCESS;        
    }

    if (reparations >= 200 && reparations < 250) {
        printf("La part prise en charge par l'assurance est de 0€ %d\n");
        printf("Et votre franchise est de €%d\n", reparations2);
        return EXIT_SUCCESS;        
    }

    if (reparations == 250) {
        printf("La part prise en charge par l'assurance correspondant à votre réparation est de : 50€ %d\n");
        printf("Et votre franchise est de €%d\n", reparations2);
        return EXIT_SUCCESS;
    }
    
    if (reparations == 2500) {
        printf("La part prise en charge par l'assurance correspondant à votre réparation est de : 2250€ %d\n");
        printf("Et votre franchise est de €%d\n", reparations2);
        return EXIT_SUCCESS;
    }

    if (reparations == 10000) {
        printf("La part prise en charge par l'assurance correspondant à votre réparation est de : 9200€ %d\n");
        printf("Et votre franchise est de €%d\n", reparations2);
        return EXIT_SUCCESS;
    }

}