import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class Combinaison {

  public static void main(String[] args) {

    JFrame fenetre = new JFrame("Fond");

    JCheckBox cyan = new JCheckBox("Cyan");
    JCheckBox magenta = new JCheckBox("Magenta");
    JCheckBox jaune = new JCheckBox("Jaune");

    cyan.addItemListener(new ItemListener() {
      @Override
      public void itemStateChanged(ItemEvent e) {
        if (e.getStateChange() == ItemEvent.SELECTED) {
          fenetre.getContentPane().setBackground(Color.CYAN);

        } 
        ;
      }
    });

    magenta.addItemListener(new ItemListener() {
      @Override
      public void itemStateChanged(ItemEvent e) {
        if (e.getStateChange() == ItemEvent.SELECTED) {
          fenetre.getContentPane().setBackground(Color.MAGENTA);
        } 
        ;
      }
    });

    jaune.addItemListener(new ItemListener() {
      @Override
      public void itemStateChanged(ItemEvent e) {
        if (e.getStateChange() == ItemEvent.SELECTED) {
          fenetre.getContentPane().setBackground(Color.YELLOW);
        } 
        ;
      }
    });

    fenetre.getContentPane().setLayout(new FlowLayout());

    fenetre.getContentPane().add(cyan);
    fenetre.getContentPane().add(magenta);
    fenetre.getContentPane().add(jaune);

    fenetre.setSize(500, 500);
    fenetre.setVisible(true);
    fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

  }

}
