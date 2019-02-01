#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, j;

    char chalist[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    char inchara[100] = {"0"};
    printf("文字列復号化ソフトです。\n作成した文字を入力してください。\n  >>>");
    scanf("%s",inchara);

    int seed;
    do {
    printf("鍵と指定した数字(1~100)を入力してください。\n  >>>");
    scanf("%d",&seed);
    } while(seed == 0);
    srand((unsigned int)seed);

    char inp1, inp2;
    long tempn;
    int tempn2;
    for (i = 0; i < 100; i + 2) {
        inp1 = inchara[i];
        inp2 = inchara[i + 1];
        for (j = 0; j < 52; j++) {
            if (tempc == chalist[j]){
                do {
                    tempn = abs((int)rand());
                } while (tempn > 2756);
                tempn2 = tempn % 52;
                printf("%c",chalist[tempn2]);
            }
        }
    }

    printf("\n");
    return 0;
}