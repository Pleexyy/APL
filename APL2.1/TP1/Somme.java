public class Somme {
	public static void main(String[] args) {
		if (args.length > 0) {
			int somme = 0;
			for (int i = 0; i < args.length; i++) {
				somme = somme + Integer.parseInt(args[i]);
			}
			System.out.println(somme);
		}
		else {
			System.out.println("Aucun arguments saisis sur la ligne de commande"); 
		}
	}
}