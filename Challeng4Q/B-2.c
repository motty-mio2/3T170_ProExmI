#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j;
    int seed;
    double x, y, circle;
    int count = 0;
    int dataset[20];

    printf("乱数のタネを入れてください：");
    scanf("%d",&seed);
    srand((unsigned int)seed);
    for(i = 1; i <= 1000; i++){
        x = (double)rand()/RAND_MAX;
        y = (double)rand()/RAND_MAX;
        circle = x * x + y * y;
        if (circle <= 1) {
            count++;
        }

        if (i % 50 == 0 && i != 0){
            dataset[i / 50 - 1] = ((double)count / i * 4 - 3.141) * 1000 / 3;
            printf("%.2f, %d\n",(double)count / i * 4, dataset[i / 50 - 1]);
        }
    }
    
    int max = dataset[0];
    int min = dataset[0];
    for (j = 1; j < 20; j++) {
        if (dataset[j] > max) {
            max = dataset[j];
        } else if (min < dataset[j]) {
            min = dataset[j];
        }
    }
    printf("===================================================================\n\n");
    double num = 20;
    for (i = 0; i < 32; i++) {
        if (i < 30) {
            printf("%3.3f |",3.14 + (3 * num / 1000));
            for (j = 0; j < 20; j++) {
                if (dataset[j] == num) {
                   printf(" * ");
                } else if (i == 20) {
                   printf("---");
                } else {
                   printf("   ");
                }
            }
            num--; 
            printf("\n");
        } else if (i == 30) {
            putchar('\n');
        } else {
            printf("      ");
            for (j = 0; j < 20; j++) {
              printf("%3d", j + 1);
            }
        putchar('\n');
        }
    }
}

    /*
*/