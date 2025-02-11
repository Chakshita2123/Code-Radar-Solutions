#include <stdio.h>

int main() {
    int num, i, j, val;

    scanf("%d", &num);
    for(i = 1; i <= num; i++) {
        val = i % 2;
        for(j = 1; j <= i; j++) {
            printf("%d ", val);
            val = 1 - val; 
        }
        printf("\n");
    }
    
    return 0;
}

