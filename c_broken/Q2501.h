#include <stdio.h>

int Q2501(void) {
    int N, K;

    scanf("%d %d", &N, &K);

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            if (K == 1) {
                printf("%d", i);
                K--;
                break;
            }
            else K--;
        }
    }

    if (K > 0) printf("0");

    return 0;
}