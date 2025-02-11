#include <stdio.h>

int main() {
    int num, i;
    scanf("%d", &num);
    printf("%d:\n", num);
    for(i = 1; i <= num; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
