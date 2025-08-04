#include <stdio.h>

int Q1934(void) {
    int T, a, b;
    scanf("%d", &T);

    for (; T > 0; T--) {
        scanf("%d %d", &a, &b);
        for (int k = (a < b) ? a : b;
            k >= 1; k--) {
            if (a % k == 0 && b % k == 0) {
                printf("%d\n", a * b / k);
                break;
            }
        }
    }

    return 0;
}