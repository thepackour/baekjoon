import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Q9584 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String scanned = input.nextLine();
        int n = input.nextInt();
        input.nextLine();
        List<String> matches = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String s = input.nextLine();
            if (isMatching(s, scanned)) matches.add(s);
        }

        System.out.println(matches.size());
        for (String item : matches) System.out.println(item);

    }

    private static boolean isMatching(String target, String criteria) {
        for (int i = 0; i < 9; i++) {
            if (target.charAt(i) != criteria.charAt(i) && criteria.charAt(i) != '*') return false;
        }
        return true;
    }
}
