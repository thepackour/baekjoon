#include <stdio.h>

int Q14215(void) {
    int a, b, c;
    int * max;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b) max = &a;
    else max = &b;
    if (c > (*max)) max = &c;
    
    while (a + b + c - 2 * (*max) <= 0) (*max)--;
        
    printf("%d", a + b + c);
    
    return 0;
}
