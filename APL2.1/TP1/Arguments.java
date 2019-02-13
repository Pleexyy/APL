public class Arguments {
	public static void main(String[] args) {
		if (args.length > 0) {
			for (String val:args) 
				System.out.println("Bonjour " + val); 
		}
		else {
			System.out.println("Aucun arguments saisis sur la ligne de commande"); 
		}
	} 
}