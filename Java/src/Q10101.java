import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int a = input.nextInt();
        input.nextLine();
        int b = input.nextInt();
        input.nextLine();
        int c = input.nextInt();
        input.nextLine();
        
        if (a + b + c != 180) System.out.println("Error");
        else {
            if (a == b) {
                if (b == c) System.out.println("Equilateral");
                else System.out.println("Isosceles");
            }
            else if ((b == c) || (c == a)) System.out.println("Isosceles");
            else System.out.println("Scalene");
        }
    }
}
