#include <stdio.h>

int main(){
    int no,num;
    int i;

    printf("正の整数を入力してください：");
    scanf("%d",&no);

    for (i = 0; i < no; i++){
        printf("%d",(i + 1) % 10);
    }
    printf("\n");
    return 0;
}