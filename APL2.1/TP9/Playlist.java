import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Playlist {
    public static void main(String[] args) {
        JFrame fenetre = new JFrame("Playlist");

        fenetre.addMouseListener(new DisplayMouseListener());

        fenetre.getContentPane().setLayout(new GridLayout(6, 1));

        fenetre.setSize(85, 150);
        fenetre.getContentPane().setBackground(Color.WHITE);
        fenetre.setVisible(true);
        // fenetre.setResizable(false);
        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JLabel label1 = new JLabel("Glassy Sky");
        JLabel label2 = new JLabel("Aogiri");
        JLabel label3 = new JLabel("Unravel");
        JLabel label4 = new JLabel("Dawn");

        fenetre.add(label1);
        fenetre.add(label2);
        fenetre.add(label3);
        fenetre.add(label4);

        // Titre selectionné

        label1.addMouseListener(new MouseAdapter() {
            public void mouseClicked(MouseEvent e) {
                // label1.setForeground(Color.WHITE);
                label1.setBackground(Color.lightGray);
                label1.setOpaque(true);

                label2.setBackground(Color.WHITE);
                label3.setBackground(Color.WHITE);
                label4.setBackground(Color.WHITE);

            }
        });

        label2.addMouseListener(new MouseAdapter() {
            public void mouseClicked(MouseEvent e) {
                // label1.setForeground(Color.WHITE);
                label2.setBackground(Color.lightGray);
                label2.setOpaque(true);

                label1.setBackground(Color.WHITE);
                label3.setBackground(Color.WHITE);
                label4.setBackground(Color.WHITE);

            }
        });

        label3.addMouseListener(new MouseAdapter() {
            public void mouseClicked(MouseEvent e) {
                // label1.setForeground(Color.WHITE);
                label3.setBackground(Color.lightGray);
                label3.setOpaque(true);

                label1.setBackground(Color.WHITE);
                label2.setBackground(Color.WHITE);
                label4.setBackground(Color.WHITE);

            }
        });

        label4.addMouseListener(new MouseAdapter() {
            public void mouseClicked(MouseEvent e) {
                // label1.setForeground(Color.WHITE);
                label4.setBackground(Color.lightGray);
                label4.setOpaque(true);

                label1.setBackground(Color.WHITE);
                label2.setBackground(Color.WHITE);
                label3.setBackground(Color.WHITE);

            }
        });

        label1.addMouseListener(new MouseAdapter() {
            public void mouseClicked(MouseEvent e) {
                // label1.setForeground(Color.WHITE);
                label1.setBackground(Color.lightGray);
                label1.setOpaque(true);

                label2.setBackground(Color.WHITE);
                label3.setBackground(Color.WHITE);
                label4.setBackground(Color.WHITE);

            }
        });

        label4.addMouseListener(new MouseAdapter() {
            public void mouseClicked(MouseEvent e) {

                label4.setBackground(Color.lightGray);
                label4.setOpaque(true);

                label1.setBackground(Color.WHITE);
                label2.setBackground(Color.WHITE);
                label3.setBackground(Color.WHITE);
            }

        });

        // Titre survolé

        label1.addMouseListener(new MouseAdapter() {
            public void mouseEntered(MouseEvent e) {
                label1.setBackground(Color.CYAN);
                label1.setOpaque(true);
            }
        });

        label1.addMouseListener(new MouseAdapter() {
            public void mouseExited(MouseEvent e) {
                label1.setBackground(Color.WHITE);
                label1.setOpaque(true);
            }
        });

        label2.addMouseListener(new MouseAdapter() {
            public void mouseEntered(MouseEvent e) {
                label2.setBackground(Color.CYAN);
                label2.setOpaque(true);
            }
        });

        label2.addMouseListener(new MouseAdapter() {
            public void mouseExited(MouseEvent e) {
                label2.setBackground(Color.WHITE);
                label2.setOpaque(true);
            }
        });

        label3.addMouseListener(new MouseAdapter() {
            public void mouseEntered(MouseEvent e) {
                label3.setBackground(Color.CYAN);
                label3.setOpaque(true);
            }
        });

        label3.addMouseListener(new MouseAdapter() {
            public void mouseExited(MouseEvent e) {
                label3.setBackground(Color.WHITE);
                label3.setOpaque(true);
            }
        });

        label4.addMouseListener(new MouseAdapter() {
            public void mouseEntered(MouseEvent e) {
                label4.setBackground(Color.CYAN);
                label4.setOpaque(true);
            }
        });

        label4.addMouseListener(new MouseAdapter() {
            public void mouseExited(MouseEvent e) {
                label4.setBackground(Color.WHITE);
                label4.setOpaque(true);
            }
        });
    }
}
