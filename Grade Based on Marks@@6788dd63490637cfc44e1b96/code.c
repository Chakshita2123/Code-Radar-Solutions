#include <stdio.h>
int main() {
    float marks;
    scanf("%f", &marks);
    if (marks >= 90) {
        printf("A\n");
    }
    else if (marks >= 80 && marks < 90) {
        printf("B\n");
    }
    else if (marks >= 70 &&  marks < 80) {
        printf("C\n");
    }
    else if (marks >= 60 && marks < 70) {
        printf("D\n");
    }
    else if (marks < 60) {
        printf("F\n");
    }
    else {
        printf("Invalid marks entered\n");
    }
    return 0;
}