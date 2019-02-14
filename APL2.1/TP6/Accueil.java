import javax.swing.*;

public class Accueil extends JPanel {
    public static void main(String[] args) {
        JFrame fenetre = new JFrame("Accueil");

        JTextField username = new JTextField();
        username.setBounds(100, 91, 170, 28);
        JPasswordField password = new JPasswordField();
        password.setBounds(100, 132, 170, 28);

        ImageIcon login = new ImageIcon("login.jpg");

        JLabel accueil = new JLabel(login);
        fenetre.add(username);

        fenetre.add(password);
        fenetre.add(accueil);

        fenetre.setSize(280, 212);

        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        fenetre.setVisible(true);
    }
}