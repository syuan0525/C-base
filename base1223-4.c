#include <stdio.h>
int main(){
    int num_enter;
    printf("Please enter the number: ");
    scanf("%d",&num_enter);
    int i = 1;
    for (i;i <= num_enter; i++){
        if (num_enter % i == 0){
            printf("%d,",i);
        }
    }
    return 0;
}
