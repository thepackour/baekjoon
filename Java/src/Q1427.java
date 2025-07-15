import java.util.Scanner;

class Q1427 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int[] count_arr = new int[10];
        long sorted = 0;
        int temp;
        int N = input.nextInt();
        input.nextLine();

        temp = N;

        while (true) {
            if (temp <= 0) break;

            int idx = temp % 10;
            count_arr[idx]++;
            temp /= 10;
        }

        for (int num = 9; num >= 0; num--) {
            for (int i = 0; i < count_arr[num]; i++) {
                sorted += num;
                sorted *= 10;
            }
        }

        System.out.println(sorted / 10);
    }
}