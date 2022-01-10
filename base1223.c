#include <stdio.h>
int main(){
    int count;
    for (count = 2; count <= 100; count += 2){
        if (count % 3 != 0){
            printf("%d\n",count);
        }
    }
    return 0;
}
