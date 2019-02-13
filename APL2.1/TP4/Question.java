import javax.swing.*;
import java.awt.*;

public class Question { // La classe bouton hérite de la classe JFrame
    public static void main(String[] args) {
        JFrame fenetre = new JFrame(); // Création de la fenetre pour récuperer les boutons et champs de texte
        fenetre.setSize(220, 100);
        fenetre.setLocation(0, 0);

        final String[] tab = { "OUI", "NON", "NSPP" };

        JLabel texte = new JLabel("Aimez-vous les chiens ?"); // Crée un label pour afficher le texte

        JPanel pan = new JPanel(new GridBagLayout()); // Créé un JPanel nommé pan pour y integrer des composants (boutons, textes)

        pan.add(texte);
        fenetre.add(pan); // On ajoute ensuite le panneau à la fenetre

        FlowLayout centered = new FlowLayout(FlowLayout.CENTER);
        fenetre.setLayout(centered);

        fenetre.add(new JButton(tab[0]));
        fenetre.add(new JButton(tab[1]));
        fenetre.add(new JButton(tab[2]));

        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        fenetre.setVisible(true);

    }
}