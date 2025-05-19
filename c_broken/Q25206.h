#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

const char* grades[] = { "A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F\0" };
double scores[] = { 4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0 };

double gradeToScore(char* pyeongjeom) {

	for (int i = 0; i < 9; i++) if (pyeongjeom[0] == grades[i][0] && pyeongjeom[1] == grades[i][1]) return scores[i];

	return -1.0;
}

int Q25206(void) {
	char trash[51];
	char pyeongjeom[3];
	double sum = 0, score = 0, hakjeom_sum = 0;
	float hakjeom;
	
	for (int i = 0; i < 20; i++) {
		scanf("%s", trash);
		scanf("%f", &hakjeom);
		scanf("%s", pyeongjeom);

		score = gradeToScore(pyeongjeom);
		printf("%lf\n", score);
		if (score != -1.0) {
			hakjeom_sum += (double)hakjeom;
			sum += hakjeom * score; printf("%lf %lf %lf\n", hakjeom * score, sum, hakjeom_sum);
		}
	}
	printf("%lf", sum / hakjeom_sum);

	return 0;
}