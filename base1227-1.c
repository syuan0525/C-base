#include <stdio.h>

int main(){
    int prices[5] = {90, 75, 83, 89, 71};
    int total = 0, id, i;
    do {
        printf("ID = ");
        scanf("%d",&id);
        for (i = 1; i <=  5 ; ++i) {
            if (id == i){
                total += prices[i-1];
            }
        }
    } while (id != 0);
    printf("Total: %d\n", total);
    return 0;
}
