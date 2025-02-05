#include <stdio.h>
int main() {
    float num;
    scanf("%d", &num);
    if (num > 0) {
        printf("Positive\n");
    } else if (num < 0) {
        printf("Negative\n");
    } else if (num = 0) {
        printf("Zero\n");
    } else {
        printf("Enter a valid number\n");
    }
    return 0;
}