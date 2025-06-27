#include <stdio.h>

int Q2798(void) {
    int N, M, sum, max = 0;
    int cards[100];
    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < N; i++) scanf("%d", &cards[i]);
    
    for (int x = 0; x < N - 2; x++) {
        for (int y = x + 1; y < N - 1; y++) {
            for (int z = y + 1; z < N; z++) {
                sum = cards[x] + cards[y] + cards[z];
                if (sum <= M && sum > max) max = sum;
            }
        }
    }
    
    printf("%d", max);
    
    return 0;
}
