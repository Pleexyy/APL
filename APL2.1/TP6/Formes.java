import javax.swing.*;
import java.awt.*;

public class Formes extends JPanel {

  public void paintComponent(Graphics g) {
    super.paintComponent(g);
    Graphics2D g2d = (Graphics2D) g;

    Image cercles;

    cercles = Toolkit.getDefaultToolkit().getImage("cercles.png");

    g2d.setColor(Color.BLUE);
    g2d.drawRect(10, 15, 50, 50);

    g2d.setColor(Color.GREEN);
    g2d.fillOval(150, 100, 25, 25);

    g2d.setColor(Color.BLACK);
    g2d.drawString(">o<", 170, 40);

    g.drawImage(cercles, 220, 210, this);

  }

  public static void main(String[] args) {
    Formes rects = new Formes();
    Formes oval = new Formes();
    Formes string = new Formes();
    Formes cercles = new Formes();

    JFrame fenetre = new JFrame("Formes");

    fenetre.add(rects);
    fenetre.add(oval);
    fenetre.add(string);
    fenetre.add(cercles);

    fenetre.setSize(360, 300);

    fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    fenetre.setVisible(true);
  }
}