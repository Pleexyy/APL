import java.awt.Color;

import javax.swing.*;

class GrisMain {
	public static void main(String[] args) {
		JFrame fenetre = new JFrame();
		fenetre.setSize(500, 300);
		fenetre.setLocation(0, 0);

		Gris g = new Gris(80);
		JPanel pan = new JPanel();

		JLabel texte = new JLabel("fenetre"); // Crée un label pour afficher le texte

		pan.add(texte);
		fenetre.add(pan);
		pan.setBackground(g);

		fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		fenetre.setVisible(true);
	}
}

public class Gris extends Color {
	public Gris(int color) {
		super(color, color, color); // Apelle le constructeur de la classe héritée
	}
}
