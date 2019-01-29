#include <stdio.h>

int main(){
    int no, tmp;
    int i =0;

    printf("正の整数を入力してください：");
    scanf("%d",&no);

    tmp = no;

    while (tmp > 0){
        tmp /= 10;
        i++;
    }

    printf("%dは%d桁です。\n",no,i);

    return 0;
}