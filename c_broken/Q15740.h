#include <stdio.h>
#include <string.h>

int sum(char* A, char* B, char* result);

int Q15740(void) {
	char A[10003];
	char B[10003];
	char result[10005] = { 0 };
	int result_length;

	scanf("%s %s", A, B);

	
	return 0;
}

int sum(char* A, char* B, char* result) {
	char is_A_negative = (A[0] == '-');
	char is_B_negative = (B[0] == '-');
	int A_idx = strlen(A) - 1;
	int B_idx = strlen(B) - 1;
	
	for (int i = 0; A_idx >= 0 && B_idx >= 0; i++) {
		char a, b;

		if (A_idx >= 0 || (A_idx == 0 && A[A_idx] != '-')) a = A[A_idx] - '0';
		else if (A_idx == 0 && A[A_idx] == '-') a = 0;
		else a = 0;

		if (B_idx >= 0 || (B_idx == 0 && B[B_idx] != '-')) b = B[B_idx] - '0';
		else if (B_idx == 0 && B[B_idx] == '-') b = 0;
		else b = 0;
		
		if (is_A_negative) a *= -1;
		if (is_B_negative) b *= -1;

		result[i] += a + b;

		if (result[i] >= 10) result[i + 1] += 1;
		else if (result[i] <= -10) result[i + 1]
		
	}
	
}

// 15 - 29 = -14
// 5 - 9 = -4
// 1 - 2 = -1
