#include <stdio.h>

int sumup(int n) {
    int i;
    int sum = 0;
    for (i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int main(void) {
    int n1;

    printf("整数を入力してください："); scanf("%d", &n1);

    printf("1から%dまで合計した値は整数は%dです。\n", n1, sumup(n1));

    return 0;
}