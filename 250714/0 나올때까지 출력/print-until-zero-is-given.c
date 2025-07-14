#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    while(1){
        scanf("%d", &a);
        if(a==0){
            break;
        }
        printf("%d\n", a);
    }
    return 0;
}