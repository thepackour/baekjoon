import java.util.Scanner;

public class Q2903 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        input.nextLine();
        System.out.println(Func(N));
    }

    public static int Func(int n) {
        if (n == 0) return 4;

        return Func(n-1) + (1 << 2*n) + (1 << n) - (1 << 2*n-2);
        // Func(n-1) + 2^2n + 2^n - 2^(2n-2)
    }
}
