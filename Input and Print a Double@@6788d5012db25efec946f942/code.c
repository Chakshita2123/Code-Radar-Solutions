#include <stdio.h>

int main() {
    double num;
    if (scanf("%lf", &num)==1) {
        printf("You entered: %.4lf\n", num);
    } else {
        printf("Invalid\n");
    }
     return 0;
}