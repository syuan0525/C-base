#include <stdio.h>
int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);

    int num;
    int isPrime = 1;
    for (num = 2; num < N && isPrime; ++num){
        if (N % num == 0){
            isPrime = 0;
        }
    }

    if (isPrime){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
