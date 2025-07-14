#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);
    for(int i = 1; i<=N; i++){
        for(int j = 1; j<=N; j++){
            if(j == N){
                printf("%d * %d = %d", i, j, i*j);
            }else{
                printf("%d * %d = %d, ", i, j, i*j);
            }
        }
        printf("\n");
    }
    return 0;
}