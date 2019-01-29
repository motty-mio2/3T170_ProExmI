#include <stdio.h>

int main(){
    int no, tmp = 1;

    printf("正の整数を入力してください：");
    scanf("%d",&no);

    if (no % 2 == 0){
        no -= 1;
    }

    while (tmp <= no){
        printf("%d ",tmp);
        tmp += 2;
    }

    printf("\n");

    return 0;
}