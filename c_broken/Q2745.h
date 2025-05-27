#include <stdio.h>

int Q2745(void) {
	char N[33] = { 0 };
	int B, power = 1, base10 = 0;
	scanf("%s", N);
	scanf("%d", &B);

	int i = 32;
	while (N[i] == 0) i--;

	while (i >= 0) {
		if (N[i] >= 65) N[i] -= 55;
		else if (N[i] <= 57) N[i] -= 48;
		base10 += N[i] * power;

		power *= B;
		i--;
	}
	printf("%d", base10);

	return 0;
}


// A = 65
// 0 = 48