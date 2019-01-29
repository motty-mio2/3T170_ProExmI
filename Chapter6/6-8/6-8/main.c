#include <stdio.h>

void min_of(const int v[], int n) {
    int temp = v[0];
    for(int i = 1; i < n; i++){
        if (temp > v[i]) {
            temp = v[i];
        }
    }
    printf("%d\n",temp);
}

int main(void) {
    int no;
    int v[no];

    printf("配列の要素数を入力してください：");
    scanf("%d",&no);

    for(int i = 0; i < no; i++){
        printf("%d個目の配列の要素を入力してください：",i + 1);
        scanf("%d",&v[i]);
    }

    min_of(v, no);

    return 0;
}