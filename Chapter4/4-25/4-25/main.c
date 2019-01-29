#include <stdio.h>

int main(){
    int no, tmp;
    int i,j;

    printf("下向き数字ピラミッドを作ります。\n何段ですか：");
    scanf("%d",&no);

    tmp = no;

    for (i = 0; i < no; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = 0;j <= (no - i - 1) * 2;j++){
            printf("%d",(i+1)%10);
        }
        printf("\n");
    }

    return 0;
}