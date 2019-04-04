import java.io.*;
import javax.swing.*;

public class ImageTest {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new FileReader("image.xpm"));

        String line = "";
        for (int i = 0; i <= 3; i++) {
            line = in.readLine();
        }

        // System.out.println(line);
        String columns = line.substring(1, 3);
        System.out.println(columns);

        int columnsInt = Integer.parseInt(columns); // converti le string en int

        String rows = line.substring(4, 6);
        System.out.println(rows);

        int rowsInt = Integer.parseInt(rows);

        // Maintenant qu'on a la hauteur, largeur de l'image on peut ouvrir une fenetre

        JFrame fenetre = new JFrame("Image");

        fenetre.setSize(columnsInt, rowsInt);
        fenetre.setVisible(true);
        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // lecture
        // f = new File("image.xpm"); // lien de l'image
        // System.out.println("Lecture réalisée avec succès" + f);
        in.close();
    }
}
