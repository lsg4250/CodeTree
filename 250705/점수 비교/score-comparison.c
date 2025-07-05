#include <stdio.h>

int main() {
    // Please write your code here.
    int Am, Ae, Bm, Be;
    scanf("%d %d\n%d %d", &Am, &Ae, &Bm, &Be);
    if (Am>Bm && Ae>Be){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}