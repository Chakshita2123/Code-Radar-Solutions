#include <stdio.h>
int main() {
    float a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if ( a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Equilateral\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        } else {
            printf("Scalene\n");
        }
    } else {
        printf("Not a valid triangle", a, b, c);
    }
    return 0;
}