#include <stdio.h>
int max2(int, int);

int main(){
    int a, b;
    printf("Please enter first number: ");
    scanf("%d", &a);
    printf("Please enter second number: ");
    scanf("%d", &b);
    printf("The maxinum is %d.\n",max2(a, b));
    return 0;
}

int max2(int a, int b) {
    if (a >= b) {
        return a;
    }else{
        return b;
    }
}
