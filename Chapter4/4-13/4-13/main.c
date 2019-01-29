#include <stdio.h>

int main(){
    int no, tmp = 0;
    int i =0;

    printf("aの値：");
    scanf("%d",&no);

    while (no >= i){
        tmp += i;
        i++;
    }

    printf("1から%dまでの和は%dです。\n",no,tmp);

    return 0;
}