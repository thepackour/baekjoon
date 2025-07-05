import java.util.Arrays;
import java.util.Scanner;

public class Q2750 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] arr = new int[1000];
        Arrays.fill(arr, 1001);

        int N = input.nextInt();
        input.nextLine();

        for (int i = 0; i < N; i++) {
            arr[i] = input.nextInt();
            input.nextLine();
        }

        Arrays.sort(arr);

        for (int i = 0; i < N; i++) System.out.println(arr[i]);
    }
}
