#include <stdio.h>

int cube(int a) {
    return a * a * a;
}

int main(void) {
    int n1;

    printf("整数を入力してください："); scanf("%d", &n1);

    printf("%dを3乗した値は整数は%dです。\n", n1, cube(n1));

    return 0;
}