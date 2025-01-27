#include <stdio.h>

int main() {
    float radius, area;
    const float pi = 3.14;
    printf();
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("Area: %.2f\n", area);
    return 0;
}