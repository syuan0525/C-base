#include <stdio.h>
#include <time.h>
static unsigned int _next = 1;

int rand(void) {
    _next = _next * 1103515245 + 12345;
    return _next / 65536 % 32768;
}
void srand(unsigned int seed) {
    _next = seed;
}

int main() {
    for (int i = 1; i <= 5; i++){
        printf("%d\n",rand());
    }
    return 0;
}
