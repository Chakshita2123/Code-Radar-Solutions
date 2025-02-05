#include <stdio.h>
void findGreater(int a, int b) {
    if (a > b)
    printf("%d\n", a, b);
    else if (b > a)
    printf("%d\n", a, b);
    else
    printf("Both are equal\n");
}
int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    findGreater(num1, num2);
    return 0;
}