#include <stdio.h>

double sda[3];

int main(void) {
    printf("{");

    for(int i = 0; i < 3; i++){
        printf("%3f",sda[i]);
        if (i != 2) {
            printf(",");
        }
    }

    printf("}\n");
    return 0;
}
