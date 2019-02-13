public class MainDate {
    public static void main(String[] args) {
        Date d = new Date(2019, 02, 15);
        System.out.println(d);
        Date l = d.lendemain();
        System.out.println(l);

        Date d2 = new Date(2019, 02, 15);
        boolean memeDate = d.compare(d2);
        System.out.println(memeDate);
    }
}
