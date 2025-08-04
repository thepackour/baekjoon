#include <stdio.h>

int Q13241(void) {
	long long int A, B, a, b;
	scanf("%lld %lld", &A, &B);

	if (A < B) {
		long long int temp = A;
		A = B;
		B = temp;
	}

	a = A;
	b = B;

	while (a % b) {
		a %= b;
		long long int temp = a;
		a = b;
		b = temp;
	}

	printf("%lld", A * B / b);

	return 0;
}