
public class Progression {
	public static void main(String[] args) {
		Compteur c = new Compteur();
		for (int i = 0; i < 5; i++) {
			c.plusUn();
		}
		System.out.println(c);
		c.plusUn();
		System.out.println(c);
		c.plusUn();
		System.out.println(c);
		c.plusUn();
		System.out.println(c);
		c.plusUn();
		System.out.println(c);
	}
}