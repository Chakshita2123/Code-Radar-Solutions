#include <stdio.h>
int findLowestSetBit(int num) {
    if (num == 0) {
        return -1;
    }
    int findLowestSetBit = num & -num;
    int position = 0;
    while (findLowestSetBit >>= 1) {
        position++;
    }
    return position;
}
int main() {
    int num;
    scanf("%d", &num);
    int position = findLowestSetBit(num);
    if (position == -1) {
        printf("No\n");
    } else {
        printf("%d\n", position);
    }
    return 0;
}