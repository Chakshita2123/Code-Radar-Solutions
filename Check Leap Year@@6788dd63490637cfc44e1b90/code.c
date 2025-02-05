#include <stdio.h>
void checkleapyear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    printf("Leap Year\n");
    else
    printf("Not a Leap Year");
}
int main() {
    int year;
    scanf("%d", &year);
    checkleapyear(year);
    return 0;
}