#include <stdio.h>

int main(void) {
    int no , i;

    printf("データ数：");
    scanf("%d", &no);

    #define NUMBER no

    int x[NUMBER];

    for (i = 0; i < NUMBER; i++) {
        printf("%d番：", i + 1);
        scanf("%d", &x[i]);
    }

    printf("{");
    i = 0;
    while (1) {
        printf("%d", x[i]);
        if (i == NUMBER - 1) {
            break;
        }
        i++;
        printf(", ");
    }
    printf("}\n");

    return 0;
}
