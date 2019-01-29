#include <stdio.h>

int main(void) {
    int i, j, k;
    int size[3] = {4, 3, 4}; //何行 と 何列及び何行 と 何列
    int a[4][3], b[3][4];
    int ans[4][4] = {0};

    for (i = 0; i <= 1; i++) { //行列の番号
        printf("%dつ目の行列を指定してください\n",i + 1);
        for (j = 0; j < size[i]; j++) { //行列の行
            for (k = 0; k < size[i + 1]; k++) { //行列の列
                printf("%d行%d列の値：", j+1, k+1);
                if (i == 0) {
                    scanf("%d", &a[j][k]);
                } else {
                    scanf("%d", &b[j][k]);
                }
            }
        }
    }

    for (i = 0; i < size[0]; i++) { //aの行の数
        for (j = 0; j < size[2]; j++) { //bの列の数
            for (k = 0; k < size[1]; k++) { //計算の番号
                ans[i][j] += a[i][k] * b[k][j];
            }
            printf("%3d",ans[i][j]);
            if (j != size[2] - 1) {
                printf(", ");
            }
        }
        printf("\n");
    }

    return 0;
}
