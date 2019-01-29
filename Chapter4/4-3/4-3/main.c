#include <stdio.h>

int main(){
    int no;
    int count = 0;

    printf("正の整数を入力してください：");
    scanf("%d",&no);

    while (no >= 0){
        count = 1;
        printf("%d ",no);
        no--;
    }

    if (count == 1){
        printf("\n");
    }

    return 0;
}