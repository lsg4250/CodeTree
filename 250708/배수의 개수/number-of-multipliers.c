#include <stdio.h>

int main() {
    // Please write your code here.
    int a[10];
    int b = 0, c = 0;
    for(int i = 0; i<10; i++){
        scanf("%d\n", &a[i]);
    }
    for(int i = 0; i<10; i++){
        if(a[i]%3==0){
            b += 1;
        }
        if(a[i]%5==0){
            c += 1;
        }
    }
    printf("%d %d", b, c);
    return 0;
}