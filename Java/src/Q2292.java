import java.util.Scanner;

public class Q2292 {
    public static int Shell(int n) {
        if (n == 2) return 6;
        else if (n == 3) return 12;

        return Shell(n-1) + 6;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int N = input.nextInt();
        input.nextLine();

        int num = 1;

        if (N == 1) System.out.println(1);
        else {
            int i = 2;
            for (; N > num; i++) num += Shell(i);
            System.out.println(i - 1);
        }
    }
}
