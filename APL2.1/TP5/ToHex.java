public class ToHex {
    public static void main(String[] args) {
        int val = Integer.parseInt(args[0], 8);
        System.out.println("Hex = " + Integer.toHexString(val));
    }
}