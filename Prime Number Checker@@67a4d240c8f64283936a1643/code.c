#include <stdio.h>
int is_prime(int num) {
    int i;
    for(i=2;i<=num/2;i++) {
        if(num%i==0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int num;
    scanf("%d",&num);
    if(is_prime(num)) {
        printf("The number is prime\n");
    }
    else {
        printf("The number is not prime\n");
    }
    return 0;
}
