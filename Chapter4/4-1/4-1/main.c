#include <stdio.h>

int main(){
    int no;
    int count = 0;

    do{
    printf("整数を入力してください：");
    scanf("%d",&no);

    if (no == 0){
        puts("その数は0です。");
    } else if (no > 0){
        puts("その数は正です。");
    } else{
        puts("その数は負です。");
    }

    printf("続行しますか？ Yes-0 , No-1 ：");
    scanf("%d",&count);
    } while (count == 0);

    return 0;
}