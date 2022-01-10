#include <stdio.h>
int main(){
    int score;
    printf("Please enter the score: ");
    scanf("%d", &score);
    if (score >=60){
        printf("PASS\n");
    }
    else{
        printf("FAIL\n");
    }
    return 0;
}
