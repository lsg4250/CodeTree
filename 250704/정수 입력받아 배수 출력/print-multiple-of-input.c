#include <stdio.h>

int main() {
    // Please write your code here.
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < 5; i++){
        printf("%d ", n*(i+1));
    }
    return 0;
}