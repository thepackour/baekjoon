import java.util.Scanner;

public class Q2720 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int T = input.nextInt();
        input.nextLine();

        for (int i = 0; i < T; i++) {
            int[] changesList = {0, 0, 0, 0};
            int change = input.nextInt();

            while (change >= 25) {
                changesList[0] += 1;
                change -= 25;
            }
            while (change >= 10) {
                changesList[1] += 1;
                change -= 10;
            }
            while (change >= 5) {
                changesList[2] += 1;
                change -= 5;
            }
            while (change >= 1) {
                changesList[3] += 1;
                change -= 1;
            }
            for (int c : changesList) System.out.print(c + " ");
            System.out.println();
        }
    }
}
