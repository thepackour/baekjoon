#include <stdio.h>

int Q10798(void) {
	char array[5][16] = { 0 };

	for (int x = 0; x < 5; x++) scanf("%s", array[x]);

	for (int y = 0; y < 15; y++) {
		for (int x = 0; x < 5; x++) {
			if (array[x][y]) printf("%c", array[x][y]);
		}
	}

	return 0;
}