#include <stdio.h>
void checkNumber(int num) {
    if (num > 0)
    printf("Positive\n");
    else if (num < 0)
    printf("Negative\n");
    else
    printf("Zero");
}
int main() {
    int num;
    scanf("%d", &num);
    checkNumber(num);
    return 0;
}