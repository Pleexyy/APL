import javax.swing.*;
import java.awt.*;

public class Saisie {
    public static void main(String[] args) {
        JFrame fenetre = new JFrame();
        fenetre.setSize(500, 300);
        fenetre.setLocation(200, 200);
        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JLabel etiquette = new JLabel("Champ de texte le long du bord inférieur");
        etiquette.setHorizontalAlignment(JLabel.CENTER); // En bas
        fenetre.add(etiquette, BorderLayout.SOUTH); // A droite
        etiquette.setForeground(Color.GREEN);
        etiquette.setBackground(Color.GRAY);


        JTextArea t = new JTextArea("Zone de texte occupant le reste de l'espace");
        t.setForeground(Color.GREEN);
        t.setBackground(Color.BLACK);
        fenetre.add(t);
        fenetre.setVisible(true);
    }
}