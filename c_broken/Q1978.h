#include <stdio.h>

int Q1978(void) {
	int N, num, count = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		
		if (num == 1) continue;

		for (int j = 2; j < num; j++) {
			if (num % j == 0) {
				count--;
				break;
			}
		}
		count++;
	}

	printf("%d", count);

	return 0;
}