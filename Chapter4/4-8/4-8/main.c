#include <stdio.h>

int main(){
    int no;
    int count = 0;

    printf("正の整数：");
    scanf("%d",&no);

    if (no >= 0) {
        count = 1;
    }

    while (no-- > 0)
        putchar('*');

    if (count == 1){
        printf("\n");
    }

    return 0;
}