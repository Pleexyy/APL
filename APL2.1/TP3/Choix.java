import javax.swing.*;
import java.awt.*;

public class Choix {
    public static void main(String[] args) {
        JFrame fenetre = new JFrame(); // Création de la fenetre
        fenetre.setSize(500, 300);
        fenetre.setLocation(0, 0);

        // Crée trois boutons radio
        JRadioButton gryffondor = new JRadioButton("Gryffondor");
        JRadioButton serdaigle = new JRadioButton("Serdaigle");
        JRadioButton serpentard = new JRadioButton("Serpentard");

        ButtonGroup buttonGroup = new ButtonGroup(); // Crée un groupe de bouton radio

        // Ajoute les boutons radios au groupe de boutons
        buttonGroup.add(gryffondor);
        buttonGroup.add(serdaigle);
        buttonGroup.add(serpentard);

        // Ajoute les boutons radios à la fenetre pour les rendre visible
        fenetre.add(gryffondor);
        fenetre.add(serdaigle);
        fenetre.add(serpentard);

        fenetre.setLayout(new GridLayout(4, 2)); // Positionne correctement les boutons

        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        fenetre.setVisible(true);

    }
}