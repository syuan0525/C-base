#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    int i, j, n[10];
    for (i = 1; i <= 10; i++) {
        do {
            n[i - 1] = rand() % 10 + 1;
            for (j = 1; j < i; j++) {
                if (n[i - 1] == n[j - 1]){
                    break;
                }
            }
        }while (j != i);
        printf("%d ",n[i - 1]);
    }
    printf("\n");
    return 0;
}
