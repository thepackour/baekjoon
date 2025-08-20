#include <stdio.h>

int Q10874(void) {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        char isPft = 1;
        for (int j = 1; j <= 10; j++) {
            int tmp;
            scanf("%d", &tmp);
            int ans = ((j - 1) % 5) + 1;
            if (tmp != ans) isPft = 0;
        }
        if (isPft > 0) printf("%d\n", i);
    }

    return 0;
}