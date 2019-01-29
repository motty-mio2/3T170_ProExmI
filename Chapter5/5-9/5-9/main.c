
#include <stdio.h>

#define NUMBER 80

int main(void)
{
    int i, j;
    int num;
    int tensu[NUMBER];
    int bunpu[11] = {0};
    int bunMAX = 0; //グラフの高さの最大値

    printf("人数を入力してください：");

    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("\a～%dで入力してください：", NUMBER);
    } while (num < 1 || num > NUMBER);

    printf("%d人の点数を入力してください：\n", num);

    for (i = 0; i < num; i++) {
        printf("%2d番：", i + 1);
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("\a0～100で入力してください：");
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }

    puts("\n------------分布グラフ------------\n");

    for (i = 0; i <= 10; i++) { //グラフの高さを求める
        if (bunpu[i] >= bunMAX){
            bunMAX = bunpu[i];
        }
    }

    for (i = bunMAX; i >= 1; i--) { //グラフの高さ
        for (j = 0; j <= 10; j++) { //グラフの横
            printf(" ");
            if (bunpu[j] >= i){
                printf("*");
            } else {
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }

    for (i = 0; i <= 33; i++) {
        printf("-");
    }
    printf("\n");

    for (i = 0; i <= 10; i++) { //横軸表示
        printf("%2d ",i * 10);
    }
    printf("\n");

    return 0;
}
