#include <stdio.h>

int main() {
    // Please write your code here.
    int N, a, b, sum = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        sum = 0;
        scanf("%d %d", &a, &b);
        for(int j=a; j<=b; j++){
            if(j%2!=0){
                continue;
            }
            sum += j;
        }
        printf("%d\n", sum);
    }
    return 0;
}