#include <stdio.h>

int main(){
    int no;
    int i,j;

    printf("正方形を作ります。\n何段ですか：");
    scanf("%d",&no);

    for (i = 0; i < no; i++) {
        for (j = 0; j < no; j++) {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}