#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char a[50], b[50];
    scanf("%s %s", &a, &b);
    if (strlen(a) > strlen(b)){
        printf("%s %d", a, strlen(a));
    } else if (strlen(b) > strlen(a)){
        printf("%s %d", b, strlen(b));
    } else{printf("same");}
    return 0;
}