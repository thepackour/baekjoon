#include <stdio.h>

int Q2869(void) {
	int A, B, V, day = 1;

	scanf("%d %d %d", &A, &B, &V);
	
	V -= A;
	day += V / (A - B);
	if (V % (A - B)) day += 1;

	printf("%d", day);
	
	return 0;
}