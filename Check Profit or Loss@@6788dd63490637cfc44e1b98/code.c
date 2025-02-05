#include <stdio.h>
int main() {
    float costprice, sellingprice;
    scanf("%f", &costprice);
    scanf("%f", &sellingprice);
    if (sellingprice > costprice) {
        printf("Profit\n");
    } else if (sellingprice < costprice) {
        printf("Loss\n");
    } else {
        printf("No Profit No Loss\n");
    }
    return 0;
}