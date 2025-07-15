#include <stdio.h>

int main() {
    // Please write your code here.
    int N, cnt;
    scanf("%d", &N);
    int a[N][N];
    for(int i=0; i<N; i++){
        cnt = 1;
        if(i%2==0){
            for(int j=0; j<N; j++){
                a[j][i] = cnt;
                cnt ++;
            }
        }
        else{
            for(int j=N-1; j>=0; j--){
                a[j][i] = cnt;
                cnt ++;
            }
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}