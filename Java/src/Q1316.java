import java.util.Scanner;
import java.util.Arrays;

public class Q1316 {
    static boolean isCharInArray(char c, char[] array) {
        for (int i = 0; i < 36; i++) {
            if (c == array[i]) return true;
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int count = 0;
        char[] letter_memory = new char[36];

        int N = input.nextInt();
        input.nextLine();
        for (int i = 0; i < N; i++) {
            String word = input.nextLine();
            Arrays.fill(letter_memory, (char) 0);
            int idx = 0;
            int array_idx = 0;

            while (idx < word.length()) {
                if (isCharInArray(word.charAt(idx), letter_memory)) break;
                else {
                    char temp = word.charAt(idx);
                    do {
                        idx++;
                        if (idx >= word.length()) break;
                    }
                    while (word.charAt(idx) == temp);
                    letter_memory[array_idx++] = temp;
                }
            }
            if (idx == word.length()) count++;
        }
        System.out.println(count);
    }
}