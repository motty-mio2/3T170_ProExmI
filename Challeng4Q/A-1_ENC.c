#include <stdio.h>

int main (){
    int i, j;

    char chalist[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    char inchara[100];
    printf("文字列暗号化ソフトです。\n100文字まで対応します。\n文字を入力してください。\n  >>>");
    scanf("%s",inchara);

    int seed, keyN = 0;
    do {
    printf("鍵となる数字(1~100)を決めてください。\n  >>>");
    scanf("%d",&seed);
    } while(seed == 0);
    keyN = seed;

    int characode[100];
    for (i = 0; i < 100; i++) {
        for (j = 0; j < 52; j++) {
            if (inchara[i] == chalist[j]){
                characode[i] = (j + keyN * 10 + 520) / 52 + 1;
                printf("%c",chalist[characode[i]]);
            }
        } /*
        if (characode[i] == 0) {
            int charleng = i;
            break;
        } */
    }

    printf("\n");
    return 0;
}