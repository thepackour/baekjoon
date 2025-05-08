import java.util.Scanner;

public class Q2444 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int i = 1;
        int N = input.nextInt();
        input.nextLine();

        for (; i <= N; i++) {
            for (int j = 0; j < N - i; j++) System.out.print(" ");
            for (int j = 0; j < (2 * i) - 1; j++) System.out.print("*");
            System.out.println();
        }

        i -= 2;

        for (; i >= 0; i--) {
            for (int j = 0; j < N - i; j++) System.out.print(" ");
            for (int j = 0; j < (2 * i) - 1; j++) System.out.print("*");
            System.out.println();
        }
    }
}
