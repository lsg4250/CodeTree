#include <stdio.h>

int main() {
    // Please write your code here.
    int a[10];
    for (int i = 0; i < 2; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++){
        a[2+i] = (a[i]+a[i+1])%10;
        printf("%d ", a[i]);
    }
    return 0;
}