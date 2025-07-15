#include <stdio.h>

int main() {
    // Please write your code here.
    int N, M;
    scanf("%d %d", &N, &M);
    int a[N][M], b[N][M];
    for(int i=0; i<N*2; i++){
        for(int j=0; j<M; j++){
            if(a[N][M]==0){scanf("%d", &a[i][j]);}
            else{scanf("%d", &b[i][j]);}
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(a[i][j]==b[i][j]){
                printf("0 ");
            }else{
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}