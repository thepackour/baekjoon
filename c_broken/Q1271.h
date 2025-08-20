#include <stdio.h>
#include <string.h>


char func(char * m, char * n) {
	char div[1001];
	strcpy(div, n);
	for (int a = 1; a <= 9; a++) {
		for (int i = 0; i < strlen(n); i++) {
			if (m[i] < n[i]) {
				if (a == 1) return 0;
				else ()
			}
		}
	}
	return 0;
}

int Q1271(void) {
	char m[1001];
	char n[1001];
	char r[1001];
	scanf("%s %s", m, n);

	if (strlen(m) < strlen(n)) printf("0\n%s", m);
	else {
		int i4r = 0;
		while (strlen(m) - i4r >= strlen(n)) {
			r[i4r] = func(m + i4r, n);
			i4r++;
		}
	}
	
	return 0;
}