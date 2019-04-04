// erreur lors division par 0 par exemple

public class ArithmeticException {
	public static void main(String[] args) {
		int x = 5;
		int y = 0;
		int val = x / y;
		System.out.println(val);
	}
}