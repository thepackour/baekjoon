#include <stdio.h>

int Q11005(void) {
	int N, B;
	char Bbase[33] = { 0 };
	scanf("%d %d", &N, &B);
	
	int i = 0;
	while (N > 0) {
		Bbase[i] = N % B;

		if (Bbase[i] > 9) Bbase[i] += 55;
		else Bbase[i] += 48;
		
		N /= B;
		i++;
	}

	for (i--; i >= 0; i--) printf("%c", Bbase[i]);

	return 0;
}