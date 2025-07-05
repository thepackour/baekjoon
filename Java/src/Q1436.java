import java.util.Scanner;

public class Q1436 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = 665;
        int N = input.nextInt();
        input.nextLine();

        while (N > 0) {
            num++;
            int count = 0;
            int temp = num;
            while (temp > 0) {
                if (temp % 1000 == 666) count++;
                temp /= 10;
            }
            if (count > 0) N--;
        }

        System.out.println(num);
    }
}
