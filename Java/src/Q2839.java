import java.util.Scanner;

public class Q2839 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = -1;
        int N = input.nextInt();
        input.nextLine();

        for (int i = 1; ; i++) {
            if (N > 5 * i) continue;

            for (int j = 0; j <= i; j++) {
                if (3 * j + 5 * (i - j) == N) {
                    num = i; break;
                }
            }

            if (num != -1 || N < 3 * i) break;
        }

        System.out.println(num);
    }
}
