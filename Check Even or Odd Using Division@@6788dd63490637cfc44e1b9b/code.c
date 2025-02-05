#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    if ((num / 2) * 2 == num) {
        printf("Even\n", num);
    } else {
        printf("Odd\n", num);
    }
    return 0;
}