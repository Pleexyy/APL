import java.util.Arrays;

public class Tri {
	public static void main(String[] args) {
		if (args.length > 0) {
			Arrays.sort(args); // trie le tableau tab par ordre croissant
			System.out.println(Arrays.toString(args));
		}
		
		else {
			System.out.println("Aucun arguments saisis sur la ligne de commande"); 
		}
	}
} 
