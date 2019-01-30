#include <stdio.h>
#include <stdlib.h>

#define characternum 8

int main() {
    void printletters(int a) {
        int i, j, k;
        int charasets[5][10] =  {{0b11111,0b00001,0b11111,0b11111,0b10001,0b11111,0b11111,0b11111,0b11111,0b11111}
                                ,{0b10001,0b00001,0b00001,0b00001,0b10001,0b10000,0b10000,0b10001,0b10001,0b10001}
                                ,{0b10001,0b00001,0b11111,0b11111,0b11111,0b11111,0b11111,0b00001,0b11111,0b11111}
                                ,{0b10001,0b00001,0b10000,0b00001,0b00001,0b00001,0b10001,0b00001,0b10001,0b00001}
                                ,{0b11111,0b00001,0b11111,0b11111,0b00001,0b11111,0b11111,0b00001,0b11111,0b11111}};

        int checker[5] = {0b10000,0b01000,0b00100,0b00010,0b00001};

        int numlist[characternum];
        for (i = characternum; i > 0; i--) { //数値列を分割
            numlist[i-1] = a % 10;
            a = (a - numlist[i-1]) / 10;
        }

        int zerofinder;
        for (i = 0; i < 5; i++) { //高さ
            zerofinder = 0;
            for (j = 0; j < characternum; j++) { //文字
                if (numlist[j] == 0 && zerofinder == 0) {
                    printf("     ");
                } else {
                    zerofinder = 1;
                    for (k = 0; k < 5; k++) { //出力
                        if ((charasets[i][numlist[j]] & checker[k]) != 0) {
                        printf("*");
                        } else {
                            printf(" ");
                        }
                    }
                }
                printf("  ");
            }
            printf("\n");
        }

    }

    int innum;

    printf("表示ソフトへようこそ。\n%d文字まで入力できます。\n表示する文字を入力\n >>>",characternum);
    scanf("%d",&innum);
    putchar('\n');

    printletters(innum);

    return 0;
}