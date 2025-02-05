#include <stdio.h>
int main() {
    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("Valid\n", a, b, c);
    } else {
        printf("Invalid\n", a, b ,c);
    }
    return 0;
}