#include <stdio.h>

int main(){
    int v[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++){    // k = 1;
            printf("%d ",v[i][j]);  // v[i][j] = k;
        }                           // k++;
        printf("\n");
    }
    return 0;
}
