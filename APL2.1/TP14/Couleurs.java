import java.io.*;

public class Couleurs {
	public static void main(String[] args) {

		String fileName = "rgb.txt";
		String line = null;

		try {

			FileReader fileReader = new FileReader(fileName);

			BufferedReader bufferedReader = new BufferedReader(fileReader);

			while ((line = bufferedReader.readLine()) != null) {
				System.out.println(line);
			}
			bufferedReader.close();
		} catch (FileNotFoundException ex) {
			System.err.println("Impossible d'ouvrir le fichier" + fileName);
		} catch (IOException ex) {
			System.err.println("Erreur en chargeant le fichier" + fileName);
		}
	}
}
