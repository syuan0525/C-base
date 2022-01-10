#include <stdio.h>
int main(){
    int num_enter;
    int i = 1;
    printf("Please enter the number: ");
    scanf("%d",&num_enter);
    for (i; i <= num_enter; i++){
        printf("*");
    }
    return 0;
}
