#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        int s = i*2-1;
        for(int j = 0; j < s; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}