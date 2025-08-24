#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int Q30087(void) {
    char* seminar[] = { "Algorithm", "DataAnalysis", "ArtificialIntelligence", "CyberSecurity",
                           "Network", "Startup", "TestStrategy" };
    char* room[] = { "204", "207", "302", "B101", "303", "501", "105" };
    int N;
    char input[32];
    scanf("%d", &N);

    for (; N > 0; N--) {
        scanf("%s", input);
        for (int i = 0; i < 7; i++) {
            char* temp = seminar[i];
            if (strcmp(temp, input) == 0) {
                printf("%s", room[i]);
                break;
            }
        }
    }

    return 0;
}