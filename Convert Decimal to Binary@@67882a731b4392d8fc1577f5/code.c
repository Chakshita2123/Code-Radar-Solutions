#include <stdio.h>
void decimaltobinary(int n) {
    int i;
    int binary[32] = {0};

    for (i = 31; i >= 0; i--) {
        binary[i] = n & 1;
        n >>= 1;
    }
    printf("binary representation: ");
    for (i = 0; i < 32; i++) {
        printf("%d", binary[i]);
    }
    printf("\n");
}
int main(){
    int decimal;
    scanf("%d", &decimal);
    decimaltobinary(decimal);
    return 0;
}