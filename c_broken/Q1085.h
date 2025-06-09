#include <stdio.h>

int Q1085(void) {
	int x, y, w, h, min;
	int d[4];
	
	scanf("%d %d %d %d", &x, &y, &w, &h);

	d[0] = x;
	d[1] = w - x;
	d[2] = y;
	d[3] = h - y;

	min = d[0];

	for (int i = 1; i < 4; i++) {
		if (min > d[i]) min = d[i];
	}

	printf("%d", min);

	return 0;
}