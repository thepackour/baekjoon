#include <stdio.h>
#include <string.h>

<<<<<<< HEAD
int is_m_larger(char* n, char* m, int m_length) {
	for (int i = 0; i < m_length; i++) {
		if (n[i] < m[i]) return 1;
		if (n[i] > m[i]) return 0;
=======

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
>>>>>>> d193940fbf35fbfe6e2360a6c6e9eb10bff7802d
	}
	return 0;
}

<<<<<<< HEAD
void calc(char* n, char* m, int m_length) {
	for (int i = m_length - 1; i >= 0; i--) {
		n[i] -= m[i];
		if (n[i] < 0) {
			n[i] += 10;
			n[i - 1]--;
		}
	}
}

void m_inc(char* m_copy, char * m, int m_length) {
	for (int i = 0; i < m_length; i++) {
		m_copy[i] += m[i];
		if (m_copy[i + 1] >= 10) {
			m_copy[i + 1]++;
			m_copy[i] -= 10;
		}
	}
}

int Q1271(void) {
	char n[1001] = { 0 };
	char m[1001] = { 0 };
	char r[1001] = { 0 };
	int n_length, m_length;
	int i = 0; // r¿« ±Ê¿Ã

	scanf("%s %s", n, m);

	n_length = strlen(n);
	m_length = strlen(m);

	for (int j = 0; j < n_length; j++) n[j] -= '0';
	for (int j = 0; j < m_length; j++) m[j] -= '0';

	while (n_length - i >= m_length) {
		char n_copy[1001];
		strcpy(n_copy, n);

		if (m_length - i == n_length && is_m_larger(n + i, m, m_length)) {
			r[i++] = 0;
		}
		else {
			int r_value = 0;
			do {
				strcpy(n, n_copy);
				calc(n_copy + i, m, m_length);
				r_value++;
			} while (i > 0 && n_copy[i - 1] >= 0);

			r[i++] = r_value;
		}
	}

	for (int j = i - 1; j >= 0; j--) printf("%d", r[j]);
	printf("\n");
	
	i = 0;
	for (; i < n_length; i++) if (n[i] != 0) break;
	
	if (i == n_length) printf("0");
	else for (; i < n_length; i++) printf("%d", n[i]);

=======
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
	
>>>>>>> d193940fbf35fbfe6e2360a6c6e9eb10bff7802d
	return 0;
}