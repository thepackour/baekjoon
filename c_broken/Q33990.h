#include <stdio.h>

int Q33990(void) {
	int N, nearest = 999, Ai, Bi, Ci, sum;
	
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d %d", &Ai, &Bi, &Ci);
		sum = Ai + Bi + Ci;
		if (512 <= sum && sum < nearest) nearest = sum;
	}

	printf("%d", (nearest < 999) ? nearest : -1);

	return 0;
}