#include <stdio.h>

void rev_intary(int v[], int n) {
    for(int i = n - 1; i >= 0; i--){
        printf("%d",v[i]);
        if(i != 0){
            printf(",");
        } else {
            printf("\n");
        }
    }
}

int main(void) {
    int no;

    printf("配列の要素数を入力してください：");
    scanf("%d",&no);

    int v[no];
    int rev_v[no];

    for(int i = 0; i < no; i++){
        printf("%d個目の配列の要素を入力してください：",i + 1);
        scanf("%d",&v[i]);
    }

    rev_intary(v, no);

    return 0;
}