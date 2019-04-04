import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

import javax.swing.JFrame;

public class Test {

    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.addMouseListener(new DisplayMouseListener());
        frame.setSize(200, 200);
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}

class DisplayMouseListener implements MouseListener {

    public void mouseClicked(MouseEvent e) {
        System.out.println("mouseClicked\t" + e);
    }

    public void mousePressed(MouseEvent e) {
        System.out.println("mousePressed\t" + e);
    }

    public void mouseReleased(MouseEvent e) {
        System.out.println("mouseReleased\t" + e);
    }

    public void mouseEntered(MouseEvent e) {
        System.out.println("mouseEntered\t" + e);
    }

    public void mouseExited(MouseEvent e) {
        System.out.println("mouseExited\t" + e);
    }
}