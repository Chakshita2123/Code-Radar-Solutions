#include <stdio.h>
int clearBit(int num, int n) {
    int mask = ~(1<<n);
    return num & mask;
}
int main() {
    int num,n;
    scanf("%d %d",&num,&n);
    int result = clearBit(num,n);
    printf("%d",n,result);
    result 0;
}