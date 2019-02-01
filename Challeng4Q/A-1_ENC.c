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
    } while(seed == 0);
    srand((unsigned int)seed);

    char tempc;
    long tempn;
    long ret1, ret2;
    for (i = 0; i < 100; i++) {
        tempc = inchara[i];
        for (j = 0; j < 52; j++) {
            if (tempc == chalist[j]){
                tempn = (rand()/RAND_MAX)*53;
                ret1 = (j + 1) * tempn % 52;
                ret2 = (tempn - (ret1 - 1)) / 52;
                printf("%c",chalist[ret1]);
                printf("%c",chalist[ret2]);
            }
        }
    }

    printf("\n");
    return 0;
}