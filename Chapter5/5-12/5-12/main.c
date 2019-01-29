#include <stdio.h>

int main(void)
{
    int i, j, k;
    int tensu1[4][3] = { {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} };
    int tensu2[4][3] = { {97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} };
    int sum[4][3] = {0};

    int tensu[2][4][3] = {0};
    for (k = 0; k < 2; k++) {
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 3; j++) {
                switch (k) {
                    case 0 : tensu[k][i][j] = tensu1[i][j]; break;
                    case 1 : tensu[k][i][j] = tensu2[i][j]; break;
                    default : break;
                }
            }
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 2; k++) {
                sum[i][j] += tensu[k][i][j];
            }
        }
    }

    for (k = 0; k < 2; k++) {
        printf("%d回目の点数\n", k + 1);
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 3; j++) {
                printf("%4d", tensu[k][i][j]);
            }
            putchar('\n');
        }
    }

    puts("合計点");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++)
            printf("%4d", sum[i][j]);
        putchar('\n');
    }

    return 0;
}
