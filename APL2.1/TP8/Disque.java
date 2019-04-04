import javax.swing.*;
import java.awt.*;

public class Disque extends JPanel {

    private Graphics2D g2d;

    public void paintComponent(Graphics g) {
        super.paintComponent(g);
        g2d = (Graphics2D) g;
        g2d.setColor(Color.MAGENTA);
        g2d.fillOval(150, 100, 50, 50);
    }
}