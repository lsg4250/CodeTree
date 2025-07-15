#include <stdio.h>

int main() {
    // Please write your code here.
    int a[4][4], total = 0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=1; i<=4; i++){
        for(int j=0; j<i; j++){
            total += a[i-1][j];
        }
    }
    printf("%d", total);
    return 0;
}