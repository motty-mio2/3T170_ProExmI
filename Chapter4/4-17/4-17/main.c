#include <stdio.h>

int main(){
    int no, tmp = 0;
    int i = 1;

    printf("aの値：");
    scanf("%d",&no);

    while (no >= i){
        printf("%dの２乗は%d\n",i,i*i);
        i++;
    }

    return 0;
}