#include <stdio.h>

int main() {
    int height, i, j, k;
    char letter;
    scanf("%d", &height);

    for (i = 1; i <= height; i++) {
        for (j = i; j < height; j++) {
            printf(" ");
        }
        letter = 'A'; 
        for (k = 1; k <= i; k++) {
            printf("%c ", letter);
            letter++; 
        }
        printf("\n");
    }

    return 0;
}