#include <stdio.h>

int search_idx(int v[], int idx[], int key, int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == key){
            cnt++;
        }
    }
    return cnt;
}

void return_idx(int v[], int key, int n) {
    for (int i = 0; i < n; i++) {
        if (v[i] == key){
            printf("%d, ",i + 1);
        }
    }
    printf("\n");
}

int main(void) {
    int no;
    int key;

    printf("配列の要素数を入力してください：");
    scanf("%d",&no);

    int v1[no];
    int idx[no];


    for(int i = 0; i < no; i++){
        printf("%d個目の配列の要素を入力してください：",i + 1);
        scanf("%d",&v1[i]);
    }

    printf("検索する要素を入力してください：");
    scanf("%d",&key);

    int num = search_idx(v1, idx, key, no);

    printf("%d\n",num);

    return_idx(v1, key, no);

    return 0;
}