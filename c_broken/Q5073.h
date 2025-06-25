#include <stdio.h>

int Q5073(void) {
    int a, b, c, max;
    for (;;) {
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c == 0) break;
        
        // max 계산
        if (a > b) max = a;
        else max = b;
        if (c > max) max = c;
        
        // Invalid 출력
        if (a + b + c - 2 * max <= 0) {
            printf("Invalid\n");
            continue;
        }
        if ((a * b == 0) || (c == 0)) {
            printf("Invalid\n");
            continue;
        }
        
        // 나머지 출력
        if (a == b) {
            if (b == c) {
                printf("Equilateral\n");
            }
            else printf("Isosceles\n");
        }
        else if ((a - c) * (b - c) == 0) printf("Isosceles\n");
        else printf("Scalene\n");
    }
    
    return 0;
}
