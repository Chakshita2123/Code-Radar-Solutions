#include <stdio.h>
int main() {
    float age;
    scanf("%f", &age);
    if (age >= 18) {
        printf("Eligible\n");
    } else if (age < 18) {
        printf("Not Eligible\n");
    } else {
        printf("Enter a valid age\n");
    }
    return 0;
}