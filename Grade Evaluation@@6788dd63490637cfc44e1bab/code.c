#include <stdio.h>
int main() {
    int grades;
    scanf("%d",&grades);
    if (grades=='A') {
        printf("Excellent\n");
    } else if (grades=='B') {
        printf("Good\n");
    } else if (grades=='C') {
        printf("Average\n");
    } else if (grades=='D') {
        printf("Below Average\n");
    } else if (grades=='F') {
        printf("Fail\n");
    } else {
        printf("Invalid grade\n");
    }
    return 0;
}