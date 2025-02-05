#include <stdio.h>
int main() {
    float num;
    scanf("%d", &num);
    if (num > 0) {
        printf("Positive\n");
    } else if (num < 0) {
        printf("Negative\n");
    } else {
        printf("Zero");
    }
    return 0;
}