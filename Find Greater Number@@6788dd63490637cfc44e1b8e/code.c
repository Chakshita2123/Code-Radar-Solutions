#include <stdio.h>
int findGreater(int a, int b) {
    if (a > b)
    return a;
    else if (b > a)
    return b;
    else
    return 0;
}
int main() {
    int num1, num2, result;
    scanf("%d %d", &num1, &num2);
    result = findGreater(num1, num2);
    printf("%d\n", result);
    return 0;
}