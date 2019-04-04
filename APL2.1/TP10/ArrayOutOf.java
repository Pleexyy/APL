// Lorsqu'on essai d'acceder a une valeur du tableau qui n'existe pas

public class ArrayOutOf {
	public static void main(String[] args) {
		String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
		System.out.println(cars[5]);
	}

}