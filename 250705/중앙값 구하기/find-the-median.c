#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b, c;
    scanf("%d %d %d", &a ,&b ,&c);
    if (a>=b && b>=c){
        printf("%d", b);
    } else if(a>=b && c>=b){
        if(a>=c){
            printf("%d", c);
        }else{printf("%d", a);}
    } else if (b>=a && a>=c){
        printf("%d", a);
    } else if (b>=a && c>=a){
        if(b>=c){
            printf("%d", c);
        }else{printf("%d", b);}
    }
    return 0;
}