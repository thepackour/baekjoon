import java.io.*;

// 카운팅 정렬 알고리즘 (배열의 원소 값 범위가 작은 경우 용이하다고 함)
public class Q10989_2 {
    public static void main(String[] args) {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter output = new BufferedWriter(new OutputStreamWriter(System.out));

        int N, max = 0;
        short[] arr = new short[10000000];
        short[] sorted = new short[10000000];

        try {
            N = Integer.parseInt(input.readLine());

            for (int i = 0; i < N; i++) {
                arr[i] = Short.parseShort(input.readLine());
                if (arr[i] > max) max = arr[i]; // 0. 입력값 중 최댓값 구하기
            }

            // 1. CountingArray 생성 (n번째 칸에 arr에 있는 n 개수 저장)
            int[] CountingArray = new int[max + 1];
            for (int idx = 0; idx < N; idx++) CountingArray[arr[idx]]++;
            // for (int num : arr) CountingArray[num]++; <- 이렇게 해도 될듯??

            // 2. CountingArray를 누적합 (a[i+1] += a[i])
            for (int i = 0; i < N; i++) {
                CountingArray[i+1] += CountingArray[i];
            }


            for (int i = 0; i < N; i++) {
                output.write(Integer.toString(arr[i]));
                output.newLine();
            }

            output.flush();
            output.close();

        } catch (IOException e) { throw new RuntimeException(e); }

    }
}

/*
    - 원리 (대충 이해한대로)

    1. arr에 n값을 입력받음 (단, n은 자연수)

    2. CountingArray에는 n번째 칸에 n의 개수를 넣음

    3.

    ex)
    1. arr = {2, 1, 8, 1, 6, 6, 1, 2, 3}
    - 정렬하면 {1, 1, 1, 2, 2, 3, 6, 6, 8}
    - 정렬된 배열에서 n이 등장하는 위치가 n-1까지의 배열의 원

    2. CountingArray = {0, 3, 2, 1, 0, 0, 2, 0, 1}
    - 0은 없으므로 0번째는 0임

    3. CountingArray = {0, 3, 5, 6, 6, 6, 8, 8, 9}
 */