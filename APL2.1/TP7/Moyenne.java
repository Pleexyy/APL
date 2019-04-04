import java.lang.Number;

public class Moyenne {
    Number[] numbers = new Number[100];
    int currentPosition = 0;

    void add(Number nombre) { // Ajoute les valeurs au tableau
        this.numbers[currentPosition] = nombre;
    
        currentPosition++;
    }

    public Number getAverage() { // Donne la moyenne du tableau
        Number moyenne;
        Number somme;
        for (int i = 0; i < currentPosition; i++) {
            somme = somme + this.numbers[i].floatValue();
            return this.somme / currentPosition; // Retoruen la moyenne du tableau
        }
    }
}