#include <stdio.h>
void checkdivisibility(int num) {
    if (num % 5 == 0 && num % 11 == 0)
    printf("Divisible\n");
    else
    printf("Not Divisible");
}
int main() {
    int num;
    scanf("%d", &num);
    checkdivisibility(num);
    return 0;
}