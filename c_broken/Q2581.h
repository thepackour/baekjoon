#include <stdio.h>

int M, N, min = 0, sum = 0;

char isPrime(int n) {
	if (n == 1) return 0;

	for (int j = 2; j < n; j++) {
		if (n % j == 0) return 0;
	}
	return 1;
}

int Q2581(void) {
	scanf("%d", &M);
	scanf("%d", &N);

	for (int num = N; num >= M; num--) {
		if (isPrime(num)) {
			sum += num;
			min = num;
		}
	}

	if (min) printf("%d\n%d", sum, min);
	else printf("-1");

	return 0;
}