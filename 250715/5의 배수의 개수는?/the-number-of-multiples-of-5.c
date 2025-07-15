#include <stdio.h>

int main() {
    // Please write your code here.
    int a[4][4], cnt = 0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(a[i][j]%5==0){
                cnt += 1;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}