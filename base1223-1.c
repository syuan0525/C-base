#include <stdio.h>
int main(){
    int sum = 0;
    int num;
    int num_enter;
    printf("Please enter the number: ");
    scanf("%d",&num_enter);
    for (num = 1; num <= num_enter; num++){
        sum = sum + num;
    }
    printf("Sum: %d\n",sum);
    return 0;
}
