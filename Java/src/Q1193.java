import java.util.Scanner;

public class Q1193 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int X = input.nextInt();
        input.nextLine();

        int x = 1, y = 1;
        for (int i = 1; i < X; i++) {
            if (x == 1) {
                if (y%2 == 1) y++;
                else {
                    x++; y--;
                }
            }
            else if (y == 1) {
                if (x%2 == 0) x++;
                else {
                    x--; y++;
                }
            }
            else {
                if ((x+y) % 2 == 0) {
                    x--; y++;
                }
                else {
                    x++; y--;
                }
            }
        }

        System.out.println(x+"/"+y);
    }
}

/*
    x/y 형태
    i) x=1 && y=홀 : y++
    ii) x=1 && y=짝 : 좌하향 시작
    iii) y=1 && x=짝 : x++
    iv) y=1 && x=홀 : 우상향 시작
    v) x+y=홀 : 좌하향
    vi) x+y=짝 : 우상향
 */
