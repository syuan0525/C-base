#include <stdio.h>

int count(void) {
    static int k = 0;  // �R�A(static)���ϰ��ܼƥu�|���@���A�u�|��l�Ƥ@��
    k++;
    return k;
}

int main() {
    for (int i = 1; i <= 5; i++){
        printf("%d\n",count());
    }
    return 0;
}
