#include <stdio.h>

int Q11718(void) {
	char a;
	
	for (int i = 0; i < 100; i++) {
		if (scanf("%c", &a) == EOF) break;
		printf("%c", a);
	}

	return 0;
}