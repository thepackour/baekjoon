import java.util.Scanner;
import java.util.Arrays;

public class Q2587 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] arr = new int[5];
        int sum = 0;
        
        for (int i = 0; i < 5; i++) {
            arr[i] = input.nextInt();
            input.nextLine();
        }
        
        Arrays.sort(arr);
        
        for (int i = 0; i < 5; i++) sum += arr[i];
        
        System.out.println(sum / 5);
        System.out.println(arr[2]);
    }
}
