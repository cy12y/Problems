import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Map<String, Integer> mp = new HashMap<>();

        int n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            String s = scanner.next();
            String s1 = scanner.next();
            if (!mp.containsKey(s1)) {
                mp.put(s1, 0);
            }
            mp.put(s1, mp.get(s1) + 1);
        }

        int q = scanner.nextInt();
        for (int i = 0; i < q; i++) {
            String s = scanner.next();
            if (mp.containsKey(s)) {
                System.out.println(mp.get(s));
            } else {
                System.out.println(0);
            }
        }
    }
}
