import javax.swing.*;
import java.awt.*;

public class Sautoir extends JComponent {

  public void paintComponent(Graphics pinceau) {
    int x[] = { 0, 100, 50, 100, 0, 50, 0 };
    int y[] = { 0, 0, 50, 100, 100, 50, 0 };
    int i, r, f, g;
    
    Graphics secondPinceau = pinceau.create();
    secondPinceau.setColor(Color.CYAN);

    for (r = 0; r < 5; r++) {
      for (i = 0; i < 5; i++) {
        secondPinceau.drawPolygon(x, y, 7);
        secondPinceau.fillPolygon(x, y, 7);
        for (f = 0; f < x.length; f++)
          x[f] = x[f] + 100;
      }

      x = new int[] { 0, 100, 50, 100, 0, 50, 0 };
      for (g = 0; g < y.length; g++)
        y[g] = y[g] + 100;
    }
  }
}

class SautoirMain {
  public static void main(String[] args) {
    JFrame fenetre = new JFrame();
    fenetre.setSize(500, 430);
    fenetre.add(new Sautoir());
    fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    fenetre.setVisible(true);
  }
}