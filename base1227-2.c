#include <stdio.h>

int main(){
    int prices[5] = {90, 75, 83, 89, 71};
    int total = 0, id;
    while (1){
        printf("ID = ");
        scanf("%d",&id);
        if (id ==0){
            break;
        }
        total += prices[id - 1];
    }
    printf("Total: %d\n", total);
    return 0;
}
