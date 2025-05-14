import java.util.Scanner;

public class Q1157 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int[] count = new int[26];
        byte[] word = input.nextLine().getBytes();
        int max = 0;
        int maxAt = 0;
        boolean isOnly = false;

        for (int i = 0; i < 26; i++) count[i] = 0;

        // A = 65
        // Z = 90
        // a = 97
        for (int i = 0; i < word.length; i++) if (word[i] > 90) word[i] -= 32;

        for (byte letter : word) count[letter - 65]++;

        for (int i = 0; i < 26; i++) {
            if (count[i] > max) {
                max = count[i];
                maxAt = i;
                isOnly = true;
            }
            else if (count[i] == max) {
                isOnly = false;
            }
        }

        System.out.println((isOnly) ? Character.toString(maxAt+65) : "?");
    }
}
