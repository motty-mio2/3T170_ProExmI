#include <stdio.h>

void intary_rcpy(int v1[], const int v2[], int n) {
    for(int i = 0; i < n; i++){
        v1[i] = v2[n - 1 - i];
    }
}

int main(void) {
    int no;

    printf("配列の要素数を入力してください：");
    scanf("%d",&no);

    int v1[no];
    int v2[no];

    for(int i = 0; i < no; i++){
        printf("%d個目の配列の要素を入力してください：",i + 1);
        scanf("%d",&v2[i]);
    }

    intary_rcpy(v1, v2, no);

    for(int j = 0; j < no; j++) {
        printf("%d",v1[j]);
        if(j != no - 1){
            printf(",");
        } else {
            printf("\n");
        }
    }

    return 0;
}