#include <stdio.h>
int main(){
    int num, sum;
    printf("Please enter the number of customers: ");
    scanf("%d",&num);
    sum = num * 300;
    if (sum >= 3000){
        sum = sum * 0.8;
    }
    printf("Total: %d\n",sum);
    return 0;
}
