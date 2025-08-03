#include <stdio.h>

int Q1735(void) {
	long int A, B, C, D, a, b;
	scanf("%ld %ld", &A, &B);
	scanf("%ld %ld", &C, &D);

	long int above = A * D + C * B;
	long int below = B * D;

	if (above > below) {
		a = above;
		b = below;
	}
	else {
		a = below;
		b = above;
	}

	while (a % b) {
		a %= b;
		long int temp = a;
		a = b;
		b = temp;
	}

	printf("%ld %ld\n", above / b, below / b);

	return 0;
}