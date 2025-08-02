#include <stdio.h>

int Q11650(void) {
	int pos[100000][2];
	int count_pos0[200002];
	int count_pos1[200002];
	int N = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &pos[i][0], &pos[i][1]);

		
	}

	for (int i = 0; i < N; i++) {
		printf("%d %d\n", pos[i][0], pos[i][1]);
	}

	return 0;
}