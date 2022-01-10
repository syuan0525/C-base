#include <stdio.h>

void addone(int *n) {
    *n = *n + 1;
}

int main() {
    int a = 3;
    addone(&a);    /*複製a的記憶體位置給addone*/
    printf("%d", a);
    return 0;
}
