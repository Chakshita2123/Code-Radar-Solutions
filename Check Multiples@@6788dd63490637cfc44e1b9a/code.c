#include <stdio.h>
int main() {
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    if (num2 != 0 && num1 % num2 == 0) {
        printf("Yes\n", num1, num2);
    } else if (num2 == 0) {
        printf("Division by zero not allowed\n");
    } else {
        printf("No\n", num1, num2);
    }
    return 0;
}