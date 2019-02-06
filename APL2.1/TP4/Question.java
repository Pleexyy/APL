import javax.swing.*;
import java.awt.*;

public class Question { // La classe bouton hérite de la classe JFrame
    public static void main(String[] args) {
        JFrame fenetre = new JFrame(); // Création de la fenetre pour récuperer les boutons et champs de texte
        fenetre.setSize(250, 150);
        fenetre.setLocation(0, 0);

        JLabel texte = new JLabel("Aimez-vous les chiens ?"); // Crée un label pour afficher le texte

        JPanel pan = new JPanel(); // Créé un JPanel nommé pan pour y integrer des composants (boutons, textes)

        // Création des boutons
        JButton b1 = new JButton("Oui");
        JButton b2 = new JButton("Non");
        JButton b3 = new JButton("NSPP");

        // Ajoute les boutons et le texte au panneau
        pan.add(texte);
        pan.add(b1);
        pan.add(b2);
        pan.add(b3);

        fenetre.add(pan); // On ajoute ensuite le panneau à la fenetre

        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        fenetre.setVisible(true);

    }
}