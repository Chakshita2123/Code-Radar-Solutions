#include <stdio.h>
int main() {
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    if (num1==num2 * num2) {
        printf("Yes\n",num1,num2);
    } else {
        printf("No\n",num1,num2);
    }
    return 0;
}