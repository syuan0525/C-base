#include <stdio.h>    //用特定保留值表示陣列長度
int length(int []);

int main() {
    int v[] = {1, 2, 3, 4, 5, -1};
    printf("%d\n",length(v));
    return 0;
}

int length(int v[]) {
    int i = 0;
    while (v[i] != -1) {
        i++;
    }
    return i;
}
