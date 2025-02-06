#include <stdio.h>
void evaluategrade(char grade) {
    switch (grade) {
        case 'A':
        printf("Excellent\n");
        break;
        case 'B':
        printf("Good\n");
        break;
        case 'C':
        printf("Average\n");
        break;
        case 'D':
        printf("Below Average\n");
        break;
        case 'F':
        printf("Fail\n");
        break;
        default:
        printf("Invalid grade\n");
    }
}
int main() {
    char grade;
    scanf("%c",&grade);
    if (grade>='a' && grade<='z') {
        grade -= 32;
    }
    evaluategrade(grade);
    return 0;
}