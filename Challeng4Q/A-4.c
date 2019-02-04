#include <stdio.h>

#define characternum 8

int main() {
    void printletters(int list[characternum], int input_length) {
        int i, j, k;
        int charasets[5][10] =  {{0b11111,0b00001,0b11111,0b11111,0b10001,0b11111,0b11111,0b11111,0b11111,0b11111}
                                ,{0b10001,0b00001,0b00001,0b00001,0b10001,0b10000,0b10000,0b10001,0b10001,0b10001}
                                ,{0b10001,0b00001,0b11111,0b11111,0b11111,0b11111,0b11111,0b00001,0b11111,0b11111}
                                ,{0b10001,0b00001,0b10000,0b00001,0b00001,0b00001,0b10001,0b00001,0b10001,0b00001}
                                ,{0b11111,0b00001,0b11111,0b11111,0b00001,0b11111,0b11111,0b00001,0b11111,0b11111}};

        int checker[5] = {0b10000,0b01000,0b00100,0b00010,0b00001};

        for (i = 0; i < 5; i++) { //高さ
            for (j = 0; j < input_length; j++) { //文字
                for (k = 0; k < 5; k++) { //出力
                    if ((charasets[i][(list[j])] & checker[k]) != 0) {
                       printf("*");
                    } else {
                        printf(" ");
                    }
                }
                printf("  ");
            }
            printf("\n");
        }

    }

    int i;
    int lenofin;
    int innum[characternum];

    printf("表示ソフトへようこそ。\n%d文字まで入力できます。\n表示する文字を入力 or やめる場合は数字以外のキーを入力\n",characternum);
    for (i = 0; i < characternum; i++) {
        printf("%d文字目 >>>",i + 1);
        if (scanf("%d",&innum[i]) != 1) {
            break;
        }
    }
    lenofin = i;

    printf("\n");

    printletters(innum,lenofin);

    return 0;
            
    //sample edit
//on it
}