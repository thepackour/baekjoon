#include <stdio.h>
#include <math.h>

char isNotPrime(long int n) {
	// n > 3
	for (int k = 2; k <= sqrt(n); k++) {
		if (n % k == 0) return 1;
	}
	return 0;
}

int Q4134(void) {
	int T;
	long int n;
	scanf("%d", &T);

	for (; T > 0; T--) {
		scanf("%ld", &n);
		
		if (0 <= n && n <= 2) n = 2;
		else if (n == 3) n = 3;
		else while (isNotPrime(n)) n++;

		printf("%ld\n", n);
	}
	
	return 0;
}