#include <stdio.h>

int maxv(int[]);

int main() {
    int a[4] = {3, 9, 7, -1};
    printf("Max: %d\n",maxv(a));
    int b[6] = {3, 9, 11, 7, 2,-1};
    printf("Max: %d\n",maxv(b));
    return 0;
}

int maxv(int v[]) {
    int max = v[0], i = 1;
    while (v[i] != -1) {
        if (v[i] > max) {
            max = v[i];
        }
        i++;
    }
    return max;
}
