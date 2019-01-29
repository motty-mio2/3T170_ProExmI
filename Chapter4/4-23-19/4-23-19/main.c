#include <stdio.h>

int main(){
    int i, j, len;

    puts("右上直角二等辺三角形を作ります。");
    printf("短辺：");    scanf("%d", &len);

    for (i = 1; i <= len; i++){
        for (j = 0; j < i - 1; j++){
            putchar(' ');
        }
        for (j = len; j >= i; j--){
            putchar('*');
        }
        puts("");
    }

    return 0;
}