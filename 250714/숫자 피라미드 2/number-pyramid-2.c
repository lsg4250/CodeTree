#include <stdio.h>

int main() {
    // Please write your code here.
    int N, a=1;
    scanf("%d", &N);
    for(int i = 1; i<=N; i++){
        for(int j = 0; j<i; j++){
            printf("%d ", a);
            a+=1;
        }
        printf("\n");
    }
    return 0;
}