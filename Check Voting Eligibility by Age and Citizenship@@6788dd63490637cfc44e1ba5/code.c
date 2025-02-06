#include <stdio.h>
int main() {
    int age,iscitizen;
    scanf("%d",&age);
    scanf("%d",&iscitizen);
    if (age>=18 && iscitizen==1) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }
    return 0;
}