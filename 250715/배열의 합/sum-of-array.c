#include <stdio.h>

int main() {
    // Please write your code here.
    int a[4][4], total;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0; i<4; i++){
        total = 0;
        for(int j=0; j<4; j++){
            total += a[i][j];
        }
        printf("%d\n", total);
    }
    return 0;
}