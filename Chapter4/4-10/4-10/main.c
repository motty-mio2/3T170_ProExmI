#include <stdio.h>

int main(){
    int no;
    int i = 0;

    printf("正の整数を入力してください：");
    scanf("%d",&no);

    while (i < no){
        printf("+\n");
        i++;
    }

    return 0;
}