#include <stdio.h>

int main() {
    int n1, n2, i, j;

    puts("横長の長方形を作ります。");
    printf("一辺(その１)：");
    scanf("%d", &n1);
    printf("一辺(その２)：");
    scanf("%d", &n2);

    if (n1 <= n2) {
        for (i = 1; i <= n1; i++) {
            for (j = 1; j <= n2; j++) {
                printf("*");
            }
            puts("");
        }
    } else {
        for (i = 1; i <= n2; i++) {
            for (j = 1; j <= n1; j++) {
                printf("*");
            }
            puts("");
        }
    }

    return 0;
}