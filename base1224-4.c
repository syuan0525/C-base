#include <stdio.h>
int sum(int N);

int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);
    printf("Sum = %d.\n",sum(N));
    return 0;
}
int sum(int N) {
    if (N == 1){
        return 1;
    }
    return sum(N - 1) + N;
}
