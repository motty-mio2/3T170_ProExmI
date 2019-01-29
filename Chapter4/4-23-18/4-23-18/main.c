#include <stdio.h>

int main(){

    int i, j, len;

    puts("左上直角二等辺三角形を作ります。");
    printf("短辺："); scanf("%d", &len);

    for (i = 1; i <= len; i++){
        for (j = len; j >= i; j--){
            putchar('*');
        }
    puts("");
    }

    return 0;
}