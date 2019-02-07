#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, j;

    char chalist[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    char inchara[200] = {"0"};
    printf("文字列復号化ソフトです。\n作成した文字を入力してください。\n  >>>");
    scanf("%s",inchara);

    int seed;
    do {
    printf("鍵として指定した数字(1~100)を入力してください。\n  >>>");
    scanf("%d",&seed);
    } while(seed < 1 || 100 < seed );
    srand((unsigned int)seed);

    char inp1, inp2;
    int randn;
    int ret[2] = {53};
    int incharanum;
    for (i = 0; i < 200; i += 2) {
        inp1 = inchara[i];
        inp2 = inchara[i + 1];
        ret[0] = 53;
        ret[1] = 53;
        for (j = 0; j < 52; j++) {
            if (inp1 == chalist[j]) {
                ret[0] = j;
            } else if(inp2 == chalist[j]) {
                ret[1] = j;
            }
            if (ret[0] != 53 && ret[1] != 53) {
                randn = rand() % 53 + 1; //δ
                incharanum = (52 * ret[1] + ret[0]) / randn - 1;
                printf("%c",chalist[incharanum]);
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
