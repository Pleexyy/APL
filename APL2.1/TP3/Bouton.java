import javax.swing.*;

public class Bouton { // La classe bouton hérite de la classe JFrame
    public static void main(String[] args) {
        JFrame fenetre = new JFrame(); // Création de la fenetre
        fenetre.setSize(500, 300);
        fenetre.setLocation(0, 0);

        JPanel pan = new JPanel(); // Créé un JPanel nommé pan pour y integrer des composants (boutons)
        fenetre.setContentPane(pan); // On associe le contenue de pan à la fenetre

        JButton b1 = new JButton("Bouton 1rrrrrrrrrrrrrrr"); // La taille du bouton s'adapte à la taille du texte
        fenetre.getContentPane().add(b1); // Ajoute le bouton b au panneau de la fenetre

        JButton b2 = new JButton("Bouton 2");
        fenetre.getContentPane().add(b2); // Ajoute le bouton b au panneau de la fenetre

        JButton b3 = new JButton("Bouton 3");
        fenetre.getContentPane().add(b3); // Ajoute le bouton b au panneau de la fenetre

        JButton b4 = new JButton("Bouton 4");
        fenetre.getContentPane().add(b4); // Ajoute le bouton b au panneau de la fenetre

        JButton b5 = new JButton("Bouton 5");
        fenetre.getContentPane().add(b5); // Ajoute le bouton b au panneau de la fenetre

        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        fenetre.setVisible(true);

    }
}