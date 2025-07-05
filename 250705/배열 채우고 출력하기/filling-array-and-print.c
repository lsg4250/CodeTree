#include <stdio.h>

int main() {
    // Please write your code here.
    char a[10];
    for (int i=0; i < 10; i++){
        scanf("%c ", &a[i]);
    }
    for (int i = 9; i >= 0; i--){
        printf("%c", a[i]);
    }
    return 0;
}