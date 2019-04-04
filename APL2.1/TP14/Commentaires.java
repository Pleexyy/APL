import java.io.*;

public class Commentaires {
    public static void main(String[] args) {
        // Verifie qu'on a bien passé un argument en paramètre
        if (args.length > 0) {
            String file = args[0];

            try {
                BufferedReader in = new BufferedReader(new FileReader(file));
                String line;
                String input = "";
                while ((line = in.readLine()) != null) {
                    if (line.contains("//")) {
                        line = "";
                        System.out.println("Commentaires supprimés");
                    }
                    input += line + '\n';
                }
                FileOutputStream newFile = new FileOutputStream(file); // Créé un fichier avec le meme nom que celui
                // passé en paramètre, sans les commentaires
                newFile.write(input.getBytes()); // getBytes -> Permet d'obtenir un tableau d'octets qui contient le contenu de input
                in.close(); // fermeture des flux
                newFile.close();
            } catch (Exception e) {
                System.out.println("Erreur: " + e);
            }

        } else {
            System.err.println("Erreur: Pas d'argument saisi sur la ligne de commande");
        }
    }
}