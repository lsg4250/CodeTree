#include <stdio.h>

int main() {
    // Please write your code here.
    int A, B;
    scanf("%d %d", &A, &B);
    while(1){
        printf("%d ", A);
        if(A%2 != 0){
            A *= 2;
        }else{
            A += 3;
        }
        if(A>B){
            break;
        }
    }
    return 0;
}