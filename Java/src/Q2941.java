import java.util.Scanner;

public class Q2941 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String[] croatiaLetters = {"dz=", "c=", "c-", "d-", "lj", "nj", "s=", "z="};

        String word = input.nextLine();

        for (String item : croatiaLetters) word = word.replace(item, "a");

        System.out.println(word.length());

    }
}