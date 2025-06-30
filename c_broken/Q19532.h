#include <stdio.h>

int Q19532(void) {
	int a, b, c, d, e, f;

	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	for (int x = -999; x <= 999; x++) {
		for (int y = -999; y <= 999; y++) {
			if ((a * x + b * y == c) && (d * x + e * y == f)) {
				printf("%d %d", x, y);
				break;
			}
		}
	}
	
	return 0;
}