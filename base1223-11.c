#include <stdio.h>

int f(int x);


int main(){
    printf("%d\n",f(4));
    return 0;
}

int f(int x){
    return x + 3;
}
