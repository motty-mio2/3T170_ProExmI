#include <stdio.h>

int main(){
    int no;
    int i = 0;

    printf("正の整数を入力してください：");
    scanf("%d",&no);

    while (i < no){
        if (i % 2 == 0){
            printf("+ ");
        } else if (i % 2 == 1){
            printf("- ");
        }
        i++;
    }

    printf("\n");

    return 0;
}