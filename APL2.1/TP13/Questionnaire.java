import java.io.*;

public class Questionnaire {

	static int readInt() {
		int a = 0;
		try {
			a = System.in.read();
			System.in.read(); // lire '\n'
		} catch (IOException e) {
			System.err.println("Erreur" + e);
		}
		return a;
	}

	public static void main(String[] args) {
		try {
			BufferedReader in = new BufferedReader(new FileReader("Questions.txt"));

			String line = "";
			for (int i = 0; i < 4; i++) {
				System.out.println(line);
				line = in.readLine();
			}

			System.out.println(line);
			int a = readInt(); // Permet la lecture d'un seul char (entre par l'utilisateur)

			for (int x = 0; x < 4; x++) {
				line = in.readLine();
				System.out.println(line);
			}
			int b = readInt();

			for (int y = 0; y < 4; y++) {
				line = in.readLine();
				System.out.println(line);
			}
			int c = readInt();

			for (int z = 0; z < 4; z++) {
				line = in.readLine();
				System.out.println(line);
			}
			int d = readInt();

			for (int r = 0; r < 4; r++) {
				line = in.readLine();
				System.out.println(line);
			}
			int e = readInt();

			for (int n = 0; n < 4; n++) {
				line = in.readLine();
				System.out.println(line);
			}
			int f = readInt();

			in.close(); // ferme le flux

			Writer writer = null;

			try {
				writer = new BufferedWriter(new OutputStreamWriter(new FileOutputStream("reponses.txt"), "utf-8"));
				writer.write(a);
				writer.write("\n");
				writer.write(b);
				writer.write("\n");
				writer.write(c);
				writer.write("\n");
				writer.write(d);
				writer.write("\n");
				writer.write(e);
				writer.write("\n");
				writer.write(f);
			} catch (IOException ex) {
				System.err.println("Erreur: " + ex);

			} finally {
				try {
					writer.close();
				} catch (Exception ex) {
					System.err.println("Erreur: " + ex);
				}
			}

		} catch (IOException ex) {
			System.err.println("Erreur: " + ex);
		}
	}
}