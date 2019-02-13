import java.awt.Color;
import javax.swing.*;

public class Nuancier {
	public static void main(String[] args) {
		JFrame fenetre = new JFrame();
		
		fenetre.setLocation(0, 0);

		JPanel pan = new JPanel();

		JLabel texte = new JLabel("fenetre"); // Crée un label pour afficher le texte

		pan.add(texte);
		fenetre.add(pan);

		pan.setBackground(Color.decode("#EEEEEE"));

		fenetre.pack();

		fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		fenetre.setVisible(true);
	}
}