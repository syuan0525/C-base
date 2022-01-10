#include <stdio.h>

int main(){
    int v[] = {3,4,8,11,2,7};
    int i;
    int max = v[0];
    for (i = 1; i <= 5; i++){
        if (v[i] > max){
            max = v[i];
        }
    }
    printf("Max: %d.\n",max);
    return 0;
}

