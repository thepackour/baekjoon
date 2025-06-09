#include <stdio.h>

int Q3009(void) {
	int xy[3][2];

	for (int i = 0; i < 3; i++) scanf("%d %d", &xy[i][0], &xy[i][1]);

	if (xy[0][0] == xy[1][0]) printf("%d ", xy[2][0]);
	else if (xy[1][0] == xy[2][0]) printf("%d ", xy[0][0]);
	else printf("%d ", xy[1][0]);

	if (xy[0][1] == xy[1][1]) printf("%d", xy[2][1]);
	else if (xy[1][1] == xy[2][1]) printf("%d", xy[0][1]);
	else printf("%d", xy[1][1]);
	
	return 0;
}