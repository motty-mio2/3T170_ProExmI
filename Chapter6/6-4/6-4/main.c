#include <stdio.h>

int sqr(int x) {
    return x * x;
}

int pow4(int x) {
    return sqr(sqr(x));
}

int main(void) {
    int n1;

    printf("整数を入力してください："); scanf("%d", &n1);

    printf("%dを4乗した値は整数は%dです。\n", n1, pow4(n1));

    return 0;
}