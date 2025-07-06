#include <stdio.h>

int Q25305(void) {
    int N, k;
    int arr[1000];
    scanf("%d %d", &N, &k);
    
    for (int i = 0; i < N; i++) scanf("%d", arr+i);
    
    int max;
    int * ptr;
    for (int j = 0; j < k; j++) {
        max = 0;
        for (int i = 0; i < N; i++) {
            if (arr[i] >= max) {
                max = arr[i];
                ptr = arr + i;
            }
        }
        *(ptr) = 0;
    }
    
    printf("%d", max);
    
    return 0;
}
