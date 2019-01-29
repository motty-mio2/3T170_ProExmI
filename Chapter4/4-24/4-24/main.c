#include <stdio.h>

int main(){
    int no, max;
    int i,j;

    printf("ピラミッドを作ります。\n何段ですか：");
    scanf("%d",&no);

    for (i = 0; i < no; i++) {
        for (j = 0; j < no + i; j++) {
            if (j < no - i - 1) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}