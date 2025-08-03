#include <stdio.h>

long int gcd(long int A, long int B) {
	long int a, b;
	if (A > B) { a = A; b = B; }
	else { a = B; b = A; }

	while (a % b) {
		long int temp = a % b;
		a = b;
		b = temp;
	}
	
	return b;
}

int Q2485(void) {
	int N;
	long int tree = 0, prev_tree = 0, d_gcd = 1, min, max;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		if (i == 1) {
			scanf("%ld", &tree);
			min = tree;
		}
		if (i == 2) {
			prev_tree = tree;
			scanf("%ld", &tree);
			d_gcd = tree - prev_tree;
		}
		else if (i >= 3) {
			prev_tree = tree;
			scanf("%ld", &tree);
			d_gcd = gcd(d_gcd, tree - prev_tree);
			max = tree;
		}
	}

	printf("%ld", (max - min) / d_gcd - N + 1);
}