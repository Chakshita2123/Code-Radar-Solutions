#include <stdio.h>

int main() {
    int num, i, j;
    scanf("%d", &num);
    for(i = num; i >= 1; i--) {
        for(j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
    
    return 0;
}
