import java.awt.*;
import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Radio {

    public static void main(String[] args) {

        JFrame fenetre = new JFrame("Fond");

        JRadioButton cyan = new JRadioButton("Cyan");
        cyan.addActionListener(new ActionListener() { // Change la couleur de fond si le bouton a été cliqué
            public void actionPerformed(ActionEvent e) {
                fenetre.getContentPane().setBackground(Color.CYAN);
            }
        });

        JRadioButton magenta = new JRadioButton("Magenta");
        magenta.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                fenetre.getContentPane().setBackground(Color.MAGENTA);
            }
        });

        JRadioButton jaune = new JRadioButton("Jaune");
        jaune.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                fenetre.getContentPane().setBackground(Color.YELLOW);
            }
        });
        // Ajoute les boutons à un groupe de bouton pour pouvoir
        // n'en choisir qu'un seul à la fois
        ButtonGroup group = new ButtonGroup();
        group.add(cyan);
        group.add(magenta);
        group.add(jaune);

        fenetre.getContentPane().setLayout(new FlowLayout());
        fenetre.getContentPane().add(cyan);
        fenetre.getContentPane().add(magenta);
        fenetre.getContentPane().add(jaune);

        fenetre.setSize(500, 500);
        fenetre.setVisible(true);
        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }

}