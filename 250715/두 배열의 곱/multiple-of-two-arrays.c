#include <stdio.h>

int main() {
    // Please write your code here.
    int a[3][3], b[3][3];
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d ", a[i][j]*b[i][j]);
        }
        printf("\n");
    }
    return 0;
}