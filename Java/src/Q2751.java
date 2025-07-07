import java.io.*;
import java.util.Arrays;

public class Q2751 {
    public static void main(String[] args) {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter output = new BufferedWriter(new OutputStreamWriter(System.out));
        int[] arr = new int[1000000];
        int N;
        Arrays.fill(arr, 1000001);

        try {
            N = Integer.parseInt(input.readLine());
            for (int i = 0; i < N; i++) arr[i] = Integer.parseInt(input.readLine());

            Arrays.sort(arr);

            for (int i = 0; i < N; i++) {
                output.write(Integer.toString(arr[i]));
                output.newLine();
            }

            output.flush();
            output.close();
        } catch (IOException e) {
            throw new RuntimeException(e);
        }

    }
}

/*
    * Scanner, System.out.println은 느리다!!
    - 하드디스크, 입출력 장치의 데이터 입출력 속도가 느림
    - 따라서 버퍼에 모아놓고 한번에 보내는게 더 효율적이고 빠름
    - 아래에서 소개하는 방법은 기존 방법보다 버퍼가 훨씬 큼



    * 입력

    BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
    - BufferedReader 생성자 파라미터에는 Reader 객체가 들어간다고 함

    input.readLine();
    - 개행 문자를 만나기 전까지 데이터를 읽고(입력 버퍼에 저장하고?) String 타입으로 반환
    - 정수로 받고자 한다면 Integer.parseInt(str) 사용



    * 출력

    BufferedWriter output = new BufferedWriter(new OutputStreamWriter(System.out));
    - 입력과 유사하게 생성자 파라미터에는 Writer 객체가 들어간다고 함

    output.write(str);
    - 인자를 출력 버퍼에 저장 (출력 X)

    output.newLine();
    - 개행 문자를 출력 버퍼에 저장 (출력 X)
    - output.write("\n"); 동일한 기능

    output.flush();
    - 출력 버퍼에 있는 데이터를 모두 출력 후 버퍼 비움

    output.close();
    - 출력 스트림 닫음

    * 주의!!
    - 위의 모든 메서드는 필수적으로 예외처리를 해야 함
    - try-catch, throw/throws 등으로 예외처리
 */