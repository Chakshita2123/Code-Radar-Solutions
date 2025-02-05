#include <stdio.h>
int main() {
    int num, i;
    scanf("%d", &num);
    if (num <= 1) {
        printf("Not Prime\n", num);
    } else {
        int isPrime = 1;
        for (i = 2; i < num; i++) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime) {
        printf("Prime\n", num);
    } else {
        printf("Not Prime\n", num);
    }
    return 0;
}