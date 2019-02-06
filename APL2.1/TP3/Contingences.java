import javax.swing.*;
import java.awt.*;

public class Contingences {

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

        JTextArea t = new JTextArea(
                "Zone de texte occupant le reste de l'espace Zone de texte occupant le reste de l'espace");
        t.setForeground(Color.GREEN);
        t.setBackground(Color.BLACK);

        JScrollPane scrollPane = new JScrollPane(t);
        scrollPane.setHorizontalScrollBarPolicy(JScrollPane.HORIZONTAL_SCROLLBAR_ALWAYS);
        scrollPane.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_ALWAYS);

        fenetre.getContentPane().add(scrollPane);
        fenetre.setVisible(true);
    }
}