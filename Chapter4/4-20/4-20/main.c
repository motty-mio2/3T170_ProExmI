#include  <stdio.h>

int main(void){
    int i, j;

    printf("   | ");
    for (i = 1; i <= 9; i++) {
        printf("%d  ",i);
    }
    printf("\n");

    for (int k = 0; k <= 30; k++) {
        if (k != 3) {
            printf("-");
        } else {
            printf("+");
        }
    }
    printf("\n");

    for (j = 1; j <= 9; j++){
        printf(" %d |",j);
        for (i = 1; i <= 9; i++) {
            printf("%2d ", i * j);
        }
        printf("\n");
    }

    return (0);
}
