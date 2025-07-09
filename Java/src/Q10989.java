import java.io.*;
import java.util.Arrays;

// 맞긴 한데 알고리즘 없이 Arrays.sort()로 날먹한거
public class Q10989 {
    public static void main(String[] args) {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter output = new BufferedWriter(new OutputStreamWriter(System.out));

        int N;
        short[] arr = new short[10000000];
        Arrays.fill(arr, (short)10001);

        try {
            N = Integer.parseInt(input.readLine());

            for (int i = 0; i < N; i++) {
                arr[i] = Short.parseShort(input.readLine());
            }

            Arrays.sort(arr);

            for (int i = 0; i < N; i++) {
                output.write(Integer.toString(arr[i]));
                output.newLine();
            }

            output.flush();
            output.close();

        } catch (IOException e) { throw new RuntimeException(e); }

    }
}
