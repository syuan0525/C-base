#include <stdio.h>

int main(){
    int i, n[5];
    for (i = 1; i <= 5; i++){
        printf("%d: ", i);
        scanf("%d",&n[i-1]);

    }
    while (1){
        printf("Q: ");
        scanf("%d", &i);
        if (i == 0){
            break;
        }
        printf("%d\n",n[i-1]);
    }
    return 0;
}
