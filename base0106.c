#include <stdio.h>
#include <stdlib.h>

int main() {
    int* numbers = 0;     // 0 表示空指標(NULL)
    int length = 0;
    while (1) {
        int input;
        scanf("%d",&input);
        if (input == 0) break;
        //1. int* larger = malloc(sizeof(int) * (length + 1));  //產生一個大一格的新陣列
        //2. for (int i = 0; i < length; i++) larger[i] = numbers[i];  //複製舊陣列到新陣列
        //3. free(numbers);  //釋放舊陣列記憶體空間
        //4. numbers = larger;
        numbers = realloc(numbers, sizeof(int) * (length + 1));
        numbers[length] = input;
        length++;
    }

    printf("Number: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}
