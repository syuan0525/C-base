#include <stdio.h>
int main(){
    int num;
    int sum = 0;
    int times = 0;
    float avg;
    printf("Please enter the numbers (quit: 0): \n");
    scanf("%d",&num);
    if (num == 0){
        printf("The average is N/A.\n");
    }
    else{
        while (num != 0){
            sum = sum + num;
            times = times + 1;
            scanf("%d",&num);
        }
        avg = (float) sum / times;
        printf("The average is %f\n.",avg);
    }
    return 0;
    }
