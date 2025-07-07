#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char S[100], D[100];
    scanf("%s", S);
    S[1] = 'a';
    S[strlen(S)-2] = 'a';
    printf("%s", S);
    return 0;
}