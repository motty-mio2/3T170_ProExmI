#include <stdio.h>

int main(){
    int a,b,min,max;
    int sum = 0;
    int count;

    printf("2つの整数を入力してください。\n");
    printf("整数a："); scanf("%d",&a);
    printf("整数b："); scanf("%d",&b);

    if (a - b >= 0){
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    count = min;

    do{
        sum += count;
        count ++;
    }while(count <= max);

    printf("%d以上%d以下の全整数の和は%dです。",min,max,sum);
    scanf("%d",&count);

    return 0;
}