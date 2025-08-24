#include <stdio.h>

int Q34129() {
	int N, K, sum_max = -1, max = -1;
	int lt_K[1000];
	long sum[1000];
	int idx_arr[1000];

	scanf("%d %d", &N, &K);

	for (int i = 0; i < N; i++) {
		static int lt_K_i = 0, sum_len = 0;
		int tmp;
		scanf("%d", &tmp);

		if (tmp >= K && tmp > max) max = tmp;
		
		if (tmp < K) {
			if (lt_K_i == 0) {
				sum[0] = tmp;
				sum_max = sum[0];
				lt_K[0] = tmp;
				lt_K_i++;
			}
			else {
				
			}
			
		}
		
	}
	
	return 0;
}