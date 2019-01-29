#include <stdio.h>

#define stu 6 //人数
#define sbj 2 //科目数

int main(void) {
    int i, j;
    int raw_score[stu][sbj];
    int sum_stu[stu] = {0};
    int ave_stu[stu] = {0};
    int sum_sbj[sbj] = {0};
    int ave_sbj[sbj] = {0};

    for (i = 0; i < stu; i++) {
        printf("%d人目の点数を入力してください\n",i + 1);
        for (j = 0; j < sbj; j++) { //
            switch (j) {
                case 0 : printf("  国語："); break;
                case 1 : printf("  数学："); break;
                default : break;
            }
            scanf("%d",&raw_score[i][j]);
        }
    }

    printf("---------集計結果---------\n");
    printf("        | 合計点 | 平均点\n");
    printf("--------+--------+-------\n");

    for (j = 0; j < sbj; j++) { //科目
        for (i = 0; i < stu; i++) { //生徒数
            sum_sbj[j] += raw_score[i][j];
        }
        ave_sbj[j] = sum_sbj[j] / stu;
        switch (j) {
            case 0 : printf("  国語  |"); break;
            case 1 : printf("  数学  |"); break;
            default : break;
        }
        printf(" %5d  | %5d\n",sum_sbj[j],ave_sbj[j]);
    }

    printf("--------+--------+-------\n");

    for (i = 0; i < stu; i++) { //生徒数
        for (j = 0; j < sbj; j++) { //科目
            sum_stu[i] += raw_score[i][j];
        }
        ave_stu[i] = sum_stu[i] / sbj;
        printf(" 生徒%2d |", i + 1);
        printf(" %5d  | %5d\n",sum_stu[i],ave_stu[i]);
    }

    return 0;
}
