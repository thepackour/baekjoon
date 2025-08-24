#include <stdio.h>

int Q20492(void) {
    float N;
    scanf("%f", &N);

    int a = N * 0.78;
    int b = N * (0.8 + 0.2 * 0.78);

    printf("%d %d", a, b);
	
	return 0;
}