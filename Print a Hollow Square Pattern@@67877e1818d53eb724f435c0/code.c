#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    if (N<2) {
        printf("Size should be 2 or greater.\n");
        return 1;
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == 1 || i == N || j == 1 || j == N) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}