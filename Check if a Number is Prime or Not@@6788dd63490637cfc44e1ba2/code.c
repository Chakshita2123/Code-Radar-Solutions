#include <stdio.h>
int main() {
    int num, i, isPrime = 1;
    scanf("%d", &num);
    if (num <= 1) {
        printf("Not Prime\n", num);
    } else {
        for (i == 2; i <= num; i++) {
            if (num % i == 0) {
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime) {
                printf("Prime\n", num);
            } else {
                printf("Not Prime\n", num);
            }
        }
    }
    return 0;
}