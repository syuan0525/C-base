#include <stdio.h>

int count(void) {
    static int k = 0;  // 靜態(static)的區域變數只會有一份，只會初始化一次
    k++;
    return k;
}

int main() {
    for (int i = 1; i <= 5; i++){
        printf("%d\n",count());
    }
    return 0;
}
