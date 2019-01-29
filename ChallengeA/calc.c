#include <stdio.h>

int main(){
    int scan, state;
    double  nm1, nm2, ans;
    double memo = 0.0;
    char op;
    char mm,mmin;
    state = 0;

    while(state != 1) {
        printf("式を入力 or メモリ機能 M or 終了 Q\n>>>");
        scan = scanf("%lf %c %lf", &nm1, &op, &nm2);
        if(scan == 3){
            switch(op) {
            case '+': ans = nm1 + nm2; break;
            case '-': ans = nm1 - nm2; break;
            case '*': ans = nm1 * nm2; break;
            case '/': if( nm2 == 0.0 ) {
                    printf( "Error!(ゼロで割ることはできません。)\n" );
                    continue;
                    }
                    ans = nm1 / nm2; break;
            default:  printf( "Error!(式に誤りがあります。)\n" );
                    continue;
            }
            printf( "--> %g\n", ans );
        } else {
            scanf("%c",&mm);
            switch(mm) {
                case 'Q':
                case 'q': state = 1; break;
                case 'M':
                case 'm': state = 2; break;
            default: printf("Error!(指定外の入力がありました。)\n");
            }
            if (state == 2){
                printf("メモリに対する機能を選んでください。\n 加算 P or 減算 M or 表示 R or 消去 C \n >>>");
                scanf("%*c%c",&mmin);
                switch (mmin){
                    case 'P':
                    case 'p': printf("メモリに加算しました。\n"); memo += ans; break;
                    case 'M':
                    case 'm': printf("メモリに減算しました。\n"); memo -= ans; break;
                    case 'R':
                    case 'r': printf("現在のメモリの値は%gです。\n", memo); break;
                    case 'C':
                    case 'c': printf("メモリを消去しました。\n"); memo = 0; break;
                default:  printf("Error!（機能指定が間違っています。）\n");
                }
            }
            state = 0;
        }
    }
    printf( "Thank you for using!\n" );
}