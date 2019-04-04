import java.util.Random;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Devinette {
	public static void main(String[] argv) throws IOException {
		Random r = new Random();
		// Genere un nombre aleatoire entre 1 et 100
		int nombreADeviner = r.nextInt(100 - 1 + 1) + 1;
		int nombreEssais = 0;
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in)); // Permet de lire le texte entre
																						// par l'utilisateur

		boolean win = false;
		while (win == false) {
			System.out.println("Trouve le nombre gagnant situé entre 1 et 100");
			String name = reader.readLine();
			int guess = Integer.parseInt(name); // converti le string en int pour pouvoir l'utiliser
			nombreEssais++;

			if (guess == nombreADeviner) {
				win = true;
			} else if (guess < nombreADeviner) {
				System.out.println("Trop petit");

			} else if (guess > nombreADeviner) {
				System.out.println("Trop grand");

			}
			if ((nombreEssais >= 5) && (guess != nombreADeviner)) {
				System.out.println("Vous avez épuisé vos 5 tentatives, vous avez perdu !");
				System.exit(1);
			}
		}

		System.out.println("Vous avez gagné !");
		System.out.println("Le nombre était " + nombreADeviner);
		System.out.println("Vous avez deviné le nombre en " + nombreEssais + " essais");

	}
}