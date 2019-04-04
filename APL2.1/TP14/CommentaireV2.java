import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.BufferedReader;

class CommentaireV2 {

    public static void main(String[] args) {
        String arg = args[0];
        String source = readFile(arg);

        System.out.println(source.replaceAll("(?:/\\*(?:[^*]|(?:\\*+[^*/]))*\\*+/)|(?://.*)", ""));
    }

    static String readFile(String source) {

        File file = new File(source);

        char[] buffer = null;

        try {
            BufferedReader bufferedReader = new BufferedReader(new FileReader(file));

            buffer = new char[(int) file.length()];

            int i = 0;
            int c = bufferedReader.read();

            while (c != -1) {
                buffer[i++] = (char) c;
                c = bufferedReader.read();
            }

            bufferedReader.close();

        } catch (IOException e) {
            e.printStackTrace();
        }

        return new String(buffer);
    }

}