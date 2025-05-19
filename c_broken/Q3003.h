#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Q3003(void) {
	int correct_set[6] = { 1, 1, 2, 2, 2, 8 };	// 순서대로 알맞은 개수
	int mine;

	for (int i = 0; i < 6; i++) {
		scanf("%d", &mine);
		printf("%d ", correct_set[i] - mine);
	}

	return 0;
}