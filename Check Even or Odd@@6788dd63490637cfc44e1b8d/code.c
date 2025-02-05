#include <stdio.h>
void checkEvenOdd(int num) {
    if (num & 1)
    printf("Odd\n", num);
    else
    printf("Even\n", num);
}
int main() {
    int num;
    scanf("%d", &num);
    checkEvenOdd(num);
    return 0;
}