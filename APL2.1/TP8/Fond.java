import java.awt.*;
import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Fond {

    public static void main(String[] args) {

        JFrame fenetre = new JFrame("Fond");

        JButton cyan = new JButton("Cyan");
        cyan.addActionListener(new ActionListener() { // Change la couleur de fond si le bouton a été cliqué
            public void actionPerformed(ActionEvent e) {
                fenetre.getContentPane().setBackground(Color.CYAN);
            }
        });

        JButton magenta = new JButton("Magenta");
        magenta.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                fenetre.getContentPane().setBackground(Color.MAGENTA);
            }
        });

        JButton jaune = new JButton("Jaune");
        jaune.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                fenetre.getContentPane().setBackground(Color.YELLOW);
            }
        });

        fenetre.getContentPane().setLayout(new FlowLayout());
        fenetre.getContentPane().add(cyan);
        fenetre.getContentPane().add(magenta);
        fenetre.getContentPane().add(jaune);

        fenetre.setSize(500, 500);
        fenetre.setVisible(true);
        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }

}