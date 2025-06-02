import java.util.Scanner;

public class Q9506 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String msg;
        int sum;

        while (true) {
            int n = input.nextInt();
            input.nextLine();

            if (n == -1) break;

            msg = n + " = ";
            sum = 0;
            for (int i = 1; i <= n / 2; i++) {
                if (n % i == 0) {
                    sum += i;

                    if (i == 1) msg += i;
                    else msg += " + " + i;
                }
            }

            if (sum == n) System.out.println(msg);
            else {
                System.out.println(n + " is NOT perfect.");
            }
        }
    }
}
