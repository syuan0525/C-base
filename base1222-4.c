#include <stdio.h>
int main(){
    int num = 1;
    int times;
    printf("Please enter the number: ");
    scanf("%d",&times);
    while (num <= times){
        printf("%d\n",num);
        num = num + 1;
    }
    return 0;
}
