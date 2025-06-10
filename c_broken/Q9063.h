#include <stdio.h>

int Q9063(void) {
	int N, x_min = 10001, x_max = -10001, y_min = 10001 , y_max = -10001, x_pos, y_pos;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &x_pos, &y_pos);

		if (x_pos < x_min) x_min = x_pos;
		if (x_pos > x_max) x_max = x_pos;
		if (y_pos < y_min) y_min = y_pos;
		if (y_pos > y_max) y_max = y_pos;
	}

	printf("%d", (x_max - x_min) * (y_max - y_min));
	
	return 0;
}