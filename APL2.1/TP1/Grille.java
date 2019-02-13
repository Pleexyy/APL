public class Grille {
	public static void main(String[] args) {
		int taille = Integer.parseInt(args[0]);
		System.out.print("+");
		
		for (int i=0; i<=taille; i++) 
			System.out.print("-+");

		System.out.println(" ");
		
		for (int i=0; i<taille; i++) {
			System.out.print("|");
			for (int j=0; j<taille+1; j++) 
				System.out.print(" |");
			System.out.println("");
			System.out.print("+");
			for (int j=0;j<taille+1; j++)
				System.out.print("-+");
			System.out.println("");
		}
	}
}