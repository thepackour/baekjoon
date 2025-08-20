import java.util.Scanner;

import static java.lang.Math.sqrt;
import static java.lang.Math.ceil;

public class Q17103 {
    public static boolean isPrime(int n) {
        if (n == 1) return false;
        else {
            for (int k = 2; k <= sqrt(n); k++) {
                if (n % k == 0) return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int T = input.nextInt();
        input.nextLine();

        for (; T > 0; T--) {
            int count = 0;
            int N = input.nextInt();
            input.nextLine();

            for (int i = 1; i <= ceil((double)N / 4); i++) {
                int j = (i == 1) ? 2 : 2 * i - 1;
                if (isPrime(j) && isPrime(N - j)) count++;
            }

            System.out.println(count);
        }
    }
}
