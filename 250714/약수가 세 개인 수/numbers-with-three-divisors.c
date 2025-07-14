#include <stdio.h>

int main() {
    // Please write your code here.
    int s, e, cnt = 0, result = 0;
    scanf("%d %d", &s, &e);
    for(int i = s; i<=e; i++){
        cnt = 0;
        for(int j = 1; j<=i; j++){
            if(i%j==0){
                cnt += 1;
            }
        }
        if(cnt == 3){
            result += 1;
        }
    }
    printf("%d", result);
    return 0;
}