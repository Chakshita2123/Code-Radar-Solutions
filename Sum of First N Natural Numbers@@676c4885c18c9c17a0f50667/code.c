#include <stdio.h>

int main() {
    int num, sum = 0;
    scanf("%d", &num);
    int i = 1;
    while(i <= num) {
        sum += i;
        i++;
    }
    printf("%d\n", num, sum);
    return 0;
}