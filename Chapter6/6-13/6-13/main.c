#include <stdio.h>

void mat_add(const int a[4][3], const int b[4][3], int c[3][4][3]) {
    int i, j, k;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 4; j++){
            for (k = 0; k < 3; k++){
                switch (i) {
                    case 0: c[i][j][k] = a[j][k]; break;
                    case 1: c[i][j][k] = b[j][k]; break;
                    case 2: c[i][j][k] = a[j][k] + b[j][k]; break;
                }
            }
        }
    }
}

void view_score(const int m[3][4][3], int no) {
    int i, j;

    for (i = 0; i < 4; i++){
        for (j = 0; j < 3; j++){
            printf("%4d", m[no - 1][i][j]);
        } putchar('\n');
    }
}

int main(void) {
    int tensu1[4][3] = { {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} };
    int tensu2[4][3] = { {97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} };
    int all_score[3][4][3];

    mat_add(tensu1, tensu2, all_score);

    puts("1回目の点数"); view_score(all_score, 1);
    puts("2回目の点数"); view_score(all_score, 2);
    puts("合計点"); view_score(all_score, 3);

    return 0;
}
