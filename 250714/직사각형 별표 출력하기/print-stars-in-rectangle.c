#include <stdio.h>

int main() {
    // Please write your code here.
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}