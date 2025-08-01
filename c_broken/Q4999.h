#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int Q4999(void) {
    char a[101], b[101];
    scanf("%s", a);
    scanf("%s", b);

    if (strlen(a) < strlen(b)) printf("no");
    else printf("go");

    return 0;
}