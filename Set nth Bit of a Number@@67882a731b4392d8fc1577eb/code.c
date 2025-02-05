#include <stdio.h>
void setNthBit(int *num, int n) {
    *num |= (1 << n);
}
int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    setNthBit(&num, n);
    printf("%d\n", n, num);
    return 0;
}