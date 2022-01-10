#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void arrayRand(int [10]);
int arrayMax(int [10]);
void arrayPrint(int [10]);

int main() {
    srand(time(0));
    int v[10];
    arrayRand(v);
    arrayPrint(v);
    printf("Max: %d\n",arrayMax(v));
    return 0;
}
void arrayRand(int v[10]) {        //函式回傳值不可以是陣列型態
    int i;
    for (i = 0; i < 10; i++) {
        v[i] = rand() % 100;
    }
}

int arrayMax(int v[10]) {
    int max = v[0], i;
    for (i = 1; i <= 10; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    return max;
}

void arrayPrint(int v[10]) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d ",v[i]);
    }
    printf("\n");
}
