#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, j;

    char chalist[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    char inchara[100] = {"0"};
    printf("文字列暗号化ソフトです。\n100文字まで対応します。\n文字を入力してください。\n  >>>");
    scanf("%s",inchara);

    int seed;
    do {
    printf("鍵となる数字(1~100)を決めてください。\n  >>>");
    scanf("%d",&seed);
    } while(seed < 1 || 100 < seed );
    srand((unsigned int)seed);

    char tempc;
    int randn;
    long makenum;
    int ret1, ret2;
    for (i = 0; i < 100; i++) {
        tempc = inchara[i];
        for (j = 0; j < 52; j++) {
            if (tempc == chalist[j]){
                randn = rand() % 53 + 1; //δ
                makenum = (j + 1) * randn;
                ret1 = makenum % 52; //γ
                ret2 = (makenum - ret1) / 52; //β
                printf("%c%c",chalist[ret1],chalist[ret2]);
            }
        }
    }

    printf("\n");
    return 0;
}
