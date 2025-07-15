#include <stdio.h>

int main() {
    // Please write your code here.
    int N, cnt;
    scanf("%d", &N);
    int a[N][N];
    for(int i=0; i<N; i++){
        cnt = 1;
        for(int j=0; j<N; j++){
            a[i][j] = cnt;
            cnt ++;
        }
    }
    for(int i=0; i<N; i++){
        if(i%2==0){
            for(int j=0; j<N; j++){
                printf("%d", a[i][j]);
            }
        }else{
            for(int j=N-1; j>=0; j--){
                printf("%d", a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}