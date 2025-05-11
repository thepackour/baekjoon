import java.util.Arrays;
import java.util.Scanner;

public class Q10988 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String word = input.nextLine();
        byte[] original = word.getBytes();
        byte[] reversed = new byte[original.length];

        int i = original.length - 1;

        for (byte letter : original) {
            reversed[i] = letter;
            i--;
        }

        System.out.println((Arrays.equals(original, reversed)) ? 1 : 0);
    }
}

/*
    byte[] this_is_array_of_string = arr.getBytes();
 */