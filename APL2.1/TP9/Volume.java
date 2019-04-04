import java.awt.*;
import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Volume extends JComponent {

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


	public static void main(String[] args) {

		JFrame fenetre = new JFrame("Volume");


		fenetre.getContentPane().setLayout(new FlowLayout());

		fenetre.setSize(550, 120);
		// fenetre.getContentPane().setBackground(Color.DARK_GRAY);
		fenetre.setVisible(true);
		fenetre.add(new Volume());
		fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}

}