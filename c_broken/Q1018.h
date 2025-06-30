#include <stdio.h>

int func(char * ptr) {
	int count = 0;
	
	for (char y = 0; y < 8; y++) {
		for (char x = y % 2; x < 8; x += 2) {
			if (*(ptr + x + y * 50) == 'W') count++;
		}
	}

	for (char y = 0; y < 8; y++) {
		for (char x = (y + 1) % 2; x < 8; x += 2) {
			if (*(ptr + x + y * 50) == 'B') count++;
		}
	}

	if (count > 32) count = 64 - count;
	return count;
}

int Q1018(void) {
	int M, N, min = 64, a;
	char arr[50][50], c;
	char* ptr;
	scanf("%d %d", &N, &M);

	for (int y = 0; y < N; y++) {
		scanf("%s", arr[y]);
	}

	for (int y = 0; y <= N - 8; y++) {
		for (int x = 0; x <= M - 8; x++) {
			ptr = *(arr + y) + x;
			a = func(ptr);
			if (a < min) min = a;
		}
	}

	printf("%d", min);
	
	return 0;
}