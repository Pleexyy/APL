import javax.swing.*;
import java.awt.*;

public class Rose {
    public static void main(String[] args) {
        JFrame fenetre = new JFrame(); // Création de la fenetre pour récuperer les boutons et champs de texte
        fenetre.setTitle("Bouton");
        fenetre.setSize(300, 300);
        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        fenetre.setLayout(new BorderLayout());

        fenetre.getContentPane().add(new JLabel("Mystral"), BorderLayout.NORTH);

        fenetre.getContentPane().add(new JLabel("Libeccio"), BorderLayout.SOUTH);

        fenetre.getContentPane().add(new JLabel("Ponant"), BorderLayout.WEST);

        fenetre.getContentPane().add(new JLabel("Levant"), BorderLayout.EAST);

        JLabel label2 = new JLabel("Sirocco");
        label2.setHorizontalAlignment(JLabel.RIGHT);
        label2.setVerticalAlignment(JLabel.BOTTOM);
        fenetre.add(label2);

        fenetre.setVisible(true);
    }
}