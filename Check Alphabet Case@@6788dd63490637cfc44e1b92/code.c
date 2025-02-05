#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n", ch);
    } else {
        printf("Neither upper nor lower\n", ch);
    }
    return 0;
}