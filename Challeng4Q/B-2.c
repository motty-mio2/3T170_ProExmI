#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int seed;
    double x, y, circle;
    int outdata[2] = {0};

    printf("乱数のタネを入れてください：");
    scanf("%d",&seed);
    srand((unsigned int)seed);
    for(i = 0; i < 1000; i++){
        x = (double)rand()/RAND_MAX;
        y = (double)rand()/RAND_MAX;
        circle = x * x + y * y;
        if (circle <= 1) {
            outdata[0]++;
        } else {
            outdata[1]++;
        }
        if (i % 50 == 0 && i != 0){
            printf("%3d:%f\n",i / 50,(double)outdata[0] / i * 100);
        }
    }
}