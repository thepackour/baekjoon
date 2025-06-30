import java.util.Scanner;

public class Q2231 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int m = 1, M = 0, sum, temp;
        int N = input.nextInt();
        input.nextLine();

        while (m < N) {
            sum = 0;
            temp = m;
            for (int i = 0; i < 6; i++) {
                sum += temp % 10;
                temp /= 10;
            }
            if (N == sum + m) {
                M = m;
                break;
            }
            m++;
        }

        System.out.println(M);
    }
}
