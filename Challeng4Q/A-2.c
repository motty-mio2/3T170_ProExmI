#include <stdio.h>

int main () {


    int inyear;
    do {
    printf("西暦（0以上）を入力してください：");
    scanf("%d",&inyear);
    } while(&inyear < 0);

    if (inyear % 4 == 0 && (inyear % 100 != 0 || inyear % 400 == 0)) {
        printf("うるう年です。\n");
    } else {
        printf("うるう年ではありません。\n");
    }

    return 0;
}