#include <stdio.h>

int main(){
    int no;
    int i = 1;
    int count = 0;

    printf("正の整数を入力してください：");
    scanf("%d",&no);

    while (i <= no){
        count = 1;
        printf("%d ",i++);
    }

    if (count == 1){
        printf("\n");
    }

    return 0;
}