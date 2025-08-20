import java.util.Scanner;
import static java.lang.Math.sqrt;

public class Q4948 {
    public static boolean isPrime(int n) {
        if (n == 1) return false;
        if (n > 2) {
            for (int k = 2; k <= sqrt(n); k++) {
                if (n % k == 0) return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        while (true) {
            int count = 0;
            int n = input.nextInt();
            input.nextLine();

            if (n == 0) break;

            for (int x = n + 1; x <= n * 2; x++) {
                if (isPrime(x)) count++;
            }

            System.out.println(count);
        }
    }
}
