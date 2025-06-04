import java.util.Scanner;

public class Q11653 {
    public static int sqrt(int n) {
        for (int x = 1; x < n; x++) {
            if (x*x >= n) return x;
        }
        return 0;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int N = input.nextInt();
        input.nextLine();

        for (int i = 2; i <= sqrt(N); i++) {
            while (N % i == 0) {
                System.out.println(i);
                N /= i;
            }

            if (N == 1) break;
        }

        if (N > 1) System.out.println(N);
    }
}