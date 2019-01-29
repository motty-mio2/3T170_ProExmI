#include <stdio.h>

void alert(int n) {
    for (int i = 0; i < n; i++){
        printf("危険です！！\n");
    }
}

int main(void) {
    int n1;

    printf("回数を入力してください："); scanf("%d", &n1);

    alert(n1);

    return 0;
}