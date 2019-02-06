public class Date {
    private int annee;
    private int mois;
    private int jour;

    public Date(int annee, int mois, int jour) { // Constructeur
        this.annee = annee;
        this.mois = mois;
        this.jour = jour;
    }

    public Date lendemain() {
        Date l = new Date(this.annee, this.mois, this.jour + 1);
        return l;
    }

    public boolean compare(Date comparee) {
        boolean b = false;
        if (this.toString().equals(comparee.toString())) {
            b = true;
        }
        return b;
    }

    public String toString() {
        return Integer.toString(this.annee) 
            + "-" + Integer.toString(this.mois) 
            + "-" + Integer.toString(this.jour);
    }
}