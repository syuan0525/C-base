#include <stdio.h>

void addone(int *n) {
    *n = *n + 1;
}

int main() {
    int a = 3;
    addone(&a);    /*�ƻsa���O�����m��addone*/
    printf("%d", a);
    return 0;
}
