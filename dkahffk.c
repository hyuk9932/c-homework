#include <stdio.h>

int main() {
    int a, i, j;

    printf("몇 줄? ");
    scanf_s("%d", &a);

    for (i = 1; i <= a; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        for (j = 1; j <= 2 * (a - i); j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = a-1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        for (j = 1; j <= 2 * (a - i); j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
//gpt 좀 썼어요...//

