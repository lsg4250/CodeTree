#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char a, c;
    int cnt = 0;
    scanf("%c", &a);
    char d[5][20] = {"apple", "banana", "grape", "blueberry", "orange"};
    for(int i = 0; i<5; i++){
        if(d[i][2]==a || d[i][3]==a){
            printf("%s\n", d[i]);
            cnt += 1;
        }

    }
    printf("%d", cnt);

    return 0;
}