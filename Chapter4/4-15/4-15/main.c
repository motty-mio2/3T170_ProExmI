#include <stdio.h>

int main(){
    int min,max,dif;
    int i;
    float New;

    printf("何cmから：");
    scanf("%d",&min);

    printf("何cmまで：");
    scanf("%d",&max);

    printf("何cmごと：");
    scanf("%d",&dif);

    for (i = min;i <= max;i += dif){
        New = (i - 100) * 0.9;
        printf("%dcm %.2fkg\n",i,New);
    }

    return 0;
}