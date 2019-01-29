#include <stdio.h>

int main(){
    int no;
    int tmp = 2;

    printf("正の整数を入力してください：");
    scanf("%d",&no);

    while (tmp < no){
        printf("%d ",tmp);
        tmp *= 2;
    }

    printf("\n");

    return 0;
}