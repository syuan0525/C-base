#include <stdio.h>

int main () {
    int num;
    if (scanf("%d", &num) != 1) {
        printf("Error: Invalid input\n");
    }
    printf("%d\n", num);
    return 0;
}
