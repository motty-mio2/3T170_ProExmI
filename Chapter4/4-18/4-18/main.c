#include <stdio.h>

int main(){
    int no, tmp = 0;
    int i = 1;

    printf("何個＊を表示しますか：");
    scanf("%d",&no);

    while (no >= 5){
        printf("*****\n");
        no -= 5;
    }
    while (no > 0){
        printf("*");
        no --;
    }
    printf("\n");

    return 0;
}