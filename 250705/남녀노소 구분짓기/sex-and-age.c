#include <stdio.h>

int main() {
    // Please write your code here.
    int s, a;
    scanf("%d\n%d", &s, &a);
    if (a>=19){
        if(s == 0){
            printf("MAN");
        }else{
            printf("WOMAN");
        }
    }else{
        if(s == 0){
            printf("BOY");
        }else{
            printf("GIRL");
        }
    }
    return 0;
}