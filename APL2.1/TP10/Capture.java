
public class Division {
        public int Zero() {
                try {
                        int nb = 10;
                        return nb/0;
                }
                catch (ArithmeticException e1) {
                        System.err.println("Division par 0");
                }
                return 0;
        }
        public static void main(String[] args) {
                Division division = new Division();
                System.out.println(division.Zero());
        }
}
