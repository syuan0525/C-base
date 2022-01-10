#include <stdio.h>
int main(){
    int max;
    printf("Max = ");
    scanf("%d",&max);

    int num;
    for (num = max; num >= 1; --num){
        if (num % 3 == 2 && num % 5 == 3 && num % 7 == 2){
            break;
        }
    }
    printf("%d\n",num);
    return 0;
}
