#include <stdio.h>
int main(){
    int answer = 4;
    int guess;
    int times = 0;
    printf("Please enter your guess: ");
    scanf("%d",&guess);
    times = times + 1;
    while (guess != answer){
        if (guess > answer){
            printf("Too large!\n");
        } else {
            printf("Too small!\n");
        }
        printf("Please enter your guess: ");
        scanf("%d",&guess);
        times = times + 1;
    }
    printf("Correct! %d times\n", times);
    return 0;
}
