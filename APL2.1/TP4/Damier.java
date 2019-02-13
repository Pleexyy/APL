import javax.swing.*;
import java.awt.*;

public class Damier {
    public static void main(String[] args) {
        JFrame fenetre = new JFrame();

        int x = Integer.parseInt(args[0]); // Entier saisi sur la ligne de commande

        fenetre.setSize(500, 500);
        fenetre.setLocation(100, 100);
        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        fenetre.setMinimumSize(new Dimension(300, 300));

        GridLayout gestion = new GridLayout(x, x);
        fenetre.setLayout(gestion);

        for (int i = 0; i < x; i++) {
            for (int j = 0; j < x; j++) {
                JPanel panneau = new JPanel();
                if ((i + j) % 2 == 1)
                    panneau.setBackground(new Color(0, 255, 255));
                fenetre.add(panneau);
            }
        }
        fenetre.setVisible(true);
    }
}
