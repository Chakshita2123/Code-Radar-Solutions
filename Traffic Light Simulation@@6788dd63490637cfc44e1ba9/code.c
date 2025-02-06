#include <stdio.h>
void trafficlightaction(char signal) {
    switch(signal) {
        case 'R':
        printf("Stop\n");
        break;
        case 'G':
        printf("Go\n");
        break;
        case 'Y':
        printf("Slow Down\n");
        break;
        default:
        printf("INnvalid input\n");
    }
}
int main() {
    char signal;
    scanf("%c",&signal);
    if (signal>='a' && signal<='z') {
        signal -= 32;
    }
    trafficlightaction(signal);
    return 0;
}