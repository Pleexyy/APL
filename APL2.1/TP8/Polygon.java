import javax.swing.*;
import java.awt.*;

public class Polygon extends JPanel {

    private Graphics2D g2d;

    public void paintComponent(Graphics g) {
        super.paintComponent(g);
        g2d = (Graphics2D) g;
        int xpoints[] = { 25, 145, 25, 145, 25 };
        int ypoints[] = { 25, 25, 145, 145, 25 };
        int npoints = 5;

        g2d.setColor(Color.MAGENTA);
        g2d.fillPolygon(xpoints, ypoints, npoints);
        g2d.setColor(Color.MAGENTA);
        g2d.drawPolygon(xpoints, ypoints, npoints);
    }
}