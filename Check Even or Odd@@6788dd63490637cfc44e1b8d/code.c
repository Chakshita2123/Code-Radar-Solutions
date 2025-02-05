#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("Even\n");
    } else if (num % 2 != 0) {
        printf("Odd\n");
    } else {
        printf("Zero\n");
    }
    return 0;
}