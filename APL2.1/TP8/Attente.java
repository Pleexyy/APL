import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.awt.event.WindowEvent;

class Attente {
    public static void main(String[] args) {
        JFrame fenetre = new JFrame("Attente");

        Disque disque = new Disque();
        Polygon polygon = new Polygon();

        fenetre.getContentPane().setBackground(Color.GREEN);
        fenetre.getContentPane().add(disque);

        fenetre.addWindowListener(new WindowAdapter() {
            public void windowDeactivated(WindowEvent e) {
                System.out.println("Arrière plan");
                fenetre.getContentPane().remove(disque);
                fenetre.getContentPane().add(polygon);
                fenetre.revalidate();
                fenetre.repaint();
            }
        });

        disque.setOpaque(false); // Pour que la couleur de fond s'applique corrrectement
        polygon.setOpaque(false);

        fenetre.setSize(360, 300);
        fenetre.setVisible(true);
        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
