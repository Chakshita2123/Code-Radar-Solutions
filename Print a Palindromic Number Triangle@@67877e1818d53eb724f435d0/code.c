#include <stdio.h>

int main() {
    int num, i, j;
    scanf("%d", &num);
    for(i = 1; i <= num; i++) {
        for(j = 1; j <= num - i; j++) {
            printf(" ");
        }

        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for(j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}