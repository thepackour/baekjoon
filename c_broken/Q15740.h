#include <stdio.h>
#include <string.h>

int sum(char* A, char* B, char* result);
int sum2(char* A, char* B, char* result);

int Q15740(void) {
	char A[10003];
	char B[10003];
	char result[10005] = { 0 };
	int result_length;

	scanf("%s %s", A, B);

	if (A[0] != '-' && B[0] != '-') {
		result_length = sum(A, B, result);
	}
	else if (A[0] == '-' && B[0] == '-') {
		result_length = sum(A, B, result);
		result[result_length] = '-';
	}
	else {
		result_length = sum2(A, B, result);
	}

	for (int i = result_length; i >= 0; i--) {
		if (result[result_length] == '-') {
			if (i == result_length ) printf("-");
			else if (i == result_length - 1 && result[i] == 0) continue;
			else printf("%d", result[i]);
		}
		else {
			if (i == result_length && result[i] == 0) continue;
			printf("%d", result[i]);
		}
	}
	return 0;
}

int sum(char* A, char* B, char* result) {
	int A_idx = strlen(A) - 1;
	int B_idx = strlen(B) - 1;
	int r_length = 0;
	if (A[0] == '-') A[0] = '0';
	if (B[0] == '-') B[0] = '0';

	for (int i = 0; A_idx >= 0 || B_idx >= 0; i++) {
		if (A_idx >= 0 && B_idx >= 0) result[i] += A[A_idx] - '0' + B[B_idx] - '0';
		else if (A_idx < 0 && B_idx >= 0) result[i] += B[B_idx] - '0';
		else if (A_idx >= 0 && B_idx < 0) result[i] += A[A_idx] - '0';

		if (result[i] >= 10) {
			result[i] -= 10;
			result[i + 1]++;
		}

		A_idx--; B_idx--; r_length++;
	}

	return r_length;
}

int sum2(char* A, char* B, char* result) {
	int A_idx = strlen(A) - 1;
	int B_idx = strlen(B) - 1;
	int a = A_idx;
	int b = B_idx;
	int r_length = 0;
	if (A[0] == '-') {
		A[0] = '0';
		a--;
	}
	if (B[0] == '-') {
		B[0] = '0';
		b--;
	}

	for (int i = 0; (a > b) ? (A_idx >= 0) : (B_idx >= 0); i++) {
		if (A_idx >= 0 && B_idx >= 0) result[i] -= A[A_idx] - B[B_idx];
		else if (A_idx < 0) result[i] += B[B_idx] - '0';
		else if (B_idx < 0) result[i] -= A[A_idx] - '0';

		if (result[i] < 0) {
			result[i] += 10;
			result[i + 1]--;
		}

		A_idx--; B_idx--; r_length++;
	}

	if (result[r_length] = -1) result[r_length] = '-';

	return r_length;
}


	// 21 - 12 == 9
	// 1 - 2 == -1
	// 2 - 1 - 1 == 0
	// 
	// 12 - 21 == -9
	// 2 - 1 == 1
	// 1 - 2 == -1

	// 23 - 81 = -58
	// 3 - 1 == 2
	// 2 - 8 == -6

	// 456 - 629 = -173
	// 6 - 9 == -3
	// 5 - 2 == 3
	// 4 - 6 == -2
	
	// 20 - 23 = -3
	// 0 - 3 == -3
	// 2 - 2 == 0

	// 8 - 15 = -7
	// 8 - 5 == 3
	// 0 - 1 == -1