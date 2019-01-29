#include <stdio.h>

int main(){
    int no, no1 = 0;
    int tmp;

    printf("正の整数を入力してください：");
    scanf("%d",&no);

    tmp = no;

    while (tmp > 0){
        no1 *= 10;
        no1 += tmp % 10;
        tmp /= 10;
    }

    printf("%dを逆から読むと%dです。\n",no,no1);

    return 0;
}