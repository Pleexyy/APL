public class Voiture implements Vehicule {
	String nom;
	int nb_roue;

	Voiture() {
		this.nom = "Voiture";
		this.nb_roue = 4;
	}

	public String sorte() {
		return this.nom; 
	}

	public int nbRoues() {
		return this.nb_roue; 
	}
}