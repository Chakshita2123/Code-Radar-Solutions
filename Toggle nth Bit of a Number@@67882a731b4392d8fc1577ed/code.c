#include <stdio.h>
int toggleBit(int num, int n) {
    return num ^ (1 << n);
}
int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    int result = toggleBit(num, n);
    printf("%d\n", result);
    return 0;
}