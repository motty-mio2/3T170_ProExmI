#include <stdio.h>

int min2(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

int main(void)
{
    int n1, n2;

    puts("2つの整数を入力してください。");
    printf("1つ目："); scanf("%d", &n1);
    printf("2つ目："); scanf("%d", &n2);

    printf("小さいほうの整数は%dです。\n", min2(n1, n2));

    return 0;
}
