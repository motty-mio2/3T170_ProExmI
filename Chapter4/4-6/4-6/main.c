#include <stdio.h>

int main(){
    int no;
    int i = 1;

    printf("正の整数を入力してください：");
    scanf("%d",&no);

    if (no % 2 == 1){
        no -= 1;
    }
    no = no / 2;

    while (i <= no){
        printf("%d ",i * 2);
        i++;
    }

    printf("\n");

    return 0;
}