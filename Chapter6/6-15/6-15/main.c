#include <stdio.h>
#include <stdlib.h>

int counter = 0;

void put_count() {
    printf("put_count:%d回目\n", ++counter);
}

int main(void) {
    int turn = rand() % 10 + 2; //乱数により繰り返し回数を決定

    for(int i = 0; i < turn; i++){
        put_count();
    }
}
