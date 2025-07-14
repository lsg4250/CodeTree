#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    while(1){
        scanf("%d", &N);
        if(N > 25){
            printf("Lower\n");
        }else if(N < 25){
            printf("Higher\n");
        }else{
            printf("Good");
            break;
        }

    }
    return 0;
}