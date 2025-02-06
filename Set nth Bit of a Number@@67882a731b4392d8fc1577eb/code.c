#include <stdio.h>
int setBit(int num, int n) {
    return num | (1 << n);
}
int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    int result=setBit(num,n);
    printf("%d\n",result);
    return 0;
}